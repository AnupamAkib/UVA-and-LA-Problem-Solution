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
#define print2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << " ";}cout<<"\n";}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i]; (i==vec.size()-1? cout<<endl : cout<<" ");}
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time nl;int z=30;while(z--){cout<<'-';}nl;print(point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs");
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
#define yo(x) cerr<<(#x)<<" = "<<(x)<<endl;
using namespace std;
const lli inf = INT_MAX;
const int mod = 998244353;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(int a, int b){ return a>b;}

int x, y;
int board[10][10], sol=1;

bool hobe(int a, int b){
    if(board[a][b]) return false;
    if(a==x && b==y) return false;
    for(int j=0; j<8; j++){ //horizontal check
        if(board[a][j]) return false;
    }
    for(int i=0; i<8; i++){ //vertical check
        if(board[i][b]) return false;
    }
    int i = a, j = b;
    while(1){ //upper-right corner check
        if(i<0 or j>7) break;
        if(board[i][j]) return false;
        i--, j++;
    }
    i = a, j = b;
    while(1){ //down-left corner check
        if(j<0 or i>7) break;
        if(board[i][j]) return false;
        i++, j--;
    }
    i = a, j = b;
    while(1){ //down-right corner check
        if(i>7 or j>7) break;
        if(board[i][j]) return false;
        i++, j++;
    }
    i = a, j = b;
    while(1){ //upper-left corner check
        if(i<0 or j<0) break;
        if(board[i][j]) return false;
        i--, j--;
    }
    return true;
}

void printData(){
    if(sol<10) cout << " ";
    cout << sol << "      ";
    int c = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(board[i][j]){
                c++;
                cout << j+1 << (c==8? "\n" : " ");
            }
        }
    }
    sol++;
}
int queenCnt=1;
void play(int i, int j){
    if(queenCnt==8){
        printData();
        //print2D(board, 8, 8);nl;
        return;
    }
    if(i==8 and j==0) return;
    bool flag = false;
    for(int k=0; k<8; k++){
        if(hobe(i, k)){
            flag = true;
            board[i][k] = 1;
            queenCnt++;
            play(i+1, 0);
            board[i][k] = 0;
            queenCnt--;
        }
    }
    if(!flag) play(i+1, 0);
}

void solve(int tc){
    cin >> x >> y;
    mem(board, 0);
    x--, y--;
    board[y][x] = 1; //not changable
    queenCnt = 1, sol = 1;
    cout << "SOLN       COLUMN" << endl;
    cout << " #      1 2 3 4 5 6 7 8"; nl;nl;
    play(0, 0);
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        OUTPUT;
    #endif

    int tc = 1;
    cin >> tc; //TEST CASE
    for(int i=1; i<=tc; i++){
        solve(i);
        if(i<tc) nl;
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
