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

int n, m, board[31][31], flag[31][31], res=0, x, y, lastX, lastY;

int getMinimumSide(int a, int b){
    int s1=0, s2=0, s3=0, s4=0;
    for(int i=a-1; i>=0; i--){ //up
        if(board[i][b]==0) break;
        if(board[i][b]>0) s1++;
    }
    for(int i=a+1; i<n; i++){ //down
        if(board[i][b]==0) break;
        if(board[i][b]>0) s2++;
    }
    for(int j=b-1; j>=0; j--){ //left
        if(board[a][j]==0) break;
        if(board[a][j]>0) s3++;
    }
    for(int j=b+1; j<m; j++){ //right
        if(board[a][j]==0) break;
        if(board[a][j]>0) s4++;
    }
    return min({s1, s2, s3, s4});
}

void update(int val, int side, int a, int b){
    for(int i=a-1, cnt=0; i>=0; i--, cnt++){ //up
        if(cnt==side) break;
        board[i][b] += val;
    }
    for(int i=a+1, cnt=0; i<n; i++, cnt++){ //down
        if(cnt==side) break;
        board[i][b] += val;
    }
    for(int j=b-1, cnt=0; j>=0; j--, cnt++){ //left
        if(cnt==side) break;
        board[a][j] += val;
    }
    for(int j=b+1, cnt=0; j<m; j++, cnt++){ //right
        if(cnt==side) break;
        board[a][j] += val;
    }
}

void backtrack(int i, int j, int c){
    if(j>=m){j=0, i++;}
    if(i==n){
        if(c>res){
            res = c;
            x = lastX, y = lastY;
        }
        return;
    }
    int minSide = getMinimumSide(i, j); //get the minimum side of plus sign
    if(board[i][j]==1 and board[i][j]==flag[i][j] and minSide){
        update(-1, minSide, i, j); //decrease by 1
        lastX = i, lastY = j; //save this position as last pos
        backtrack(i, j+minSide+1, c+1);
        update(1, minSide, i, j); //increase by 1
    }
    backtrack(i, j+1, c);
}

void solve(int tc){
    cin >> n >> m;
    input2D(board, n, m);
    for(int i=0; i<n; i++){ //make a copy
        for(int j=0; j<m; j++){
            flag[i][j] = board[i][j];
        }
    }
    res = 0;
    backtrack(1, 1, 0);
    print(res)
    print(x+1 << ' ' << y+1)
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        //OUTPUT;
    #endif

    int tc = 1;
    cin >> tc; //TEST CASE
    for(int i=1; i<=tc; i++){
        solve(i);
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
