/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<endl;
#define PI acos(-1.0)
#define nl cout<<"\n"
#define mem(ar, val) memset(ar, val, sizeof(ar))
#define point(x) fixed<<setprecision(x)
#define printcase(c, n) cout << "Case " << c << ": " << n <<endl
#define printcaseii(c, n, m) cout << "Case " << c << ": " << n << " " << m <<endl
#define aInput(ar, n) for(int i=0; i<n; i++)cin>>ar[i];
#define vInput(v, n) for(int i=0; i<n; i++){lli x;cin>>x;v.push_back(x);}
#define input2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> ar[i][j];}}
#define print2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << " ";}cout<<endl;}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i]; (i==vec.size()-1? cout<<endl : cout<<" ");}
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time nl;int z=30;while(z--){cout<<'-';}nl;print(point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs");
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
#define yo(x) cerr<<(#x)<<" = "<<(x)<<endl;
#define ff first
#define ss second
using namespace std;
const lli inf = INT_MAX;
const int mod = 100000007;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(int a, int b){return a>b;}

char board[5][5];
int ans, n;

bool hobe(int i, int j){
    for(int k=i; k>=0; k--){ //up
        if(board[k][j]=='X') break;
        if(board[k][j]=='r') return false;
    }
    for(int k=i; k<n; k++){ //down
        if(board[k][j]=='X') break;
        if(board[k][j]=='r') return false;
    }
    for(int k=j; k<n; k++){ //right
        if(board[i][k]=='X') break;
        if(board[i][k]=='r') return false;
    }
    for(int k=j; k>=0; k--){ //left
        if(board[i][k]=='X') break;
        if(board[i][k]=='r') return false;
    }
    return true;
}

void backtrack(int i, int j, int res){
    if(j==n){j=0, i++;}
    if(i==n){
        ans = max(ans, res);
        return;
    }
    if(board[i][j]=='.'){
        if(hobe(i, j)){
            board[i][j] = 'r';
            backtrack(i, j+1, res+1);
            board[i][j] = '.';
        }
    }
    backtrack(i, j+1, res);
}

void solve(int tc){
    input2D(board, n, n);
    ans = 0;
    backtrack(0, 0, 0);
    print(ans)
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        //OUTPUT;
    #endif

    int tc = 1;
    //cin >> tc; //TEST CASE
    //for(int i=1; i<=tc; i++){
    //    solve(i);
    //}
    while(cin >> n){
        if(n==0) break;
        solve(n);
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
