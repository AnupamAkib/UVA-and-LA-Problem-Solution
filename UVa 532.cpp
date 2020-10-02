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
#define printcase(n) cout << "Case " << tc << ": " << n <<endl
#define printcaseii(n, m) cout << "Case " << tc << ": " << n << " " << m <<endl
#define aInput(ar, n) for(int i=0; i<n; i++)cin>>ar[i];
#define vInput(v, n) for(int i=0; i<n; i++){lli x;cin>>x;v.push_back(x);}
#define input2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> ar[i][j];}}
#define print2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << " ";}cout<<endl;}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i]; (i==vec.size()-1? cout<<endl : cout<<" ");}
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time cerr<<endl;int z=30;while(z--){cerr<<'-';}cerr<<endl;cerr<<point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs"<<endl;
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
#define IN input()
#define yo(x) cerr<<(#x)<<" = "<<(x)<<endl;
#define ff first
#define ss second
using namespace std;
const lli inf = INT_MAX;
const int mod = 100000007;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
string to_binary(lli num){if(num==0) return ""; return to_binary(num/2)+to_string(num%2);}
bool cmp(lli a, lli b){return a>b;}

typedef struct{
    int l, n, m;
} data;

char maze[32][32][32];
bool vis[32][32][32];
int lv, rw, cl;

int BFS(int l, int n, int m){
    mem(vis, 0);
    queue<data> Q;
    Q.push({l, n, m});
    vis[l][n][m] = 1;
    int lvl = 0;
    int d[35][35][35];
    mem(d, 0);
    while(!Q.empty()){
        data t = Q.front();
        if(maze[t.l][t.n][t.m]=='E'){
            return d[t.l][t.n][t.m];
        }
        Q.pop();
        l = t.l, n = t.n, m = t.m;
        if(m+1<cl && maze[l][n][m+1]!='#' && !vis[l][n][m+1]){
            d[l][n][m+1] = d[t.l][t.n][t.m]+1;
            Q.push({l, n, m+1});
            vis[l][n][m+1] = 1;
        }
        if(m-1>=0 && maze[l][n][m-1]!='#' && !vis[l][n][m-1]){
            d[l][n][m-1] = d[t.l][t.n][t.m]+1;
            Q.push({l, n, m-1});
            vis[l][n][m-1] = 1;
        }
        if(n+1<rw && maze[l][n+1][m]!='#' && !vis[l][n+1][m]){
            d[l][n+1][m] = d[t.l][t.n][t.m]+1;
            Q.push({l, n+1, m});
            vis[l][n+1][m] = 1;
        }
        if(n-1>=0 && maze[l][n-1][m]!='#' && !vis[l][n-1][m]){
            d[l][n-1][m] = d[t.l][t.n][t.m]+1;
            Q.push({l, n-1, m});
            vis[l][n-1][m] = 1;
        }
        if(l+1<lv && maze[l+1][n][m]!='#' && !vis[l+1][n][m]){
            d[l+1][n][m] = d[t.l][t.n][t.m]+1;
            Q.push({l+1, n, m});
            vis[l+1][n][m] = 1;
        }
        if(l-1>=0 && maze[l-1][n][m]!='#' && !vis[l-1][n][m]){
            d[l-1][n][m] = d[t.l][t.n][t.m]+1;
            Q.push({l-1, n, m});
            vis[l-1][n][m] = 1;
        }
    }
    return -1;
}

void solve(int l, int n, int m){
    int a, b, c;
    for(int i=0; i<l; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                cin >> maze[i][j][k];
                if(maze[i][j][k]=='S'){
                    a = i, b = j, c = k;
                }
            }
        }
    }
    int res = BFS(a, b, c);
    if(res!=-1){
        print("Escaped in "<< res << " minute(s).")
    }
    else{
        print("Trapped!")
    }
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        //OUTPUT;
    #endif

//    int tc = 1;
//    cin >> tc; //TEST CASE
//    for(int i=1; i<=tc; i++){
//        solve(i);
//    }

    while(cin>>lv>>rw>>cl){
        if(lv+rw+cl==0) break;
        solve(lv, rw, cl);
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
