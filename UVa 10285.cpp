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
#define input2D(ar, row, col) for(int i=1; i<=row; i++){for(int j=1; j<=col; j++){cin >> ar[i][j];}}
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
const int mod = 1000000000;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(int a, int b){return a>b;}

int n, m, ans=0;
int a[105][105], vis[105];

bool hobena(int i, int j){
    if(a[i-1][j]>=a[i][j] && a[i+1][j]>=a[i][j] && a[i][j-1]>=a[i][j] && a[i][j+1]>=a[i][j]){
        return true;
    }
    return false;
}

void backtrack(int i, int j, int mv){
    if(j==m+1){j=1, i++;}
    if(i==n+1) return;
    if(hobena(i, j)){
        ans = max(ans, mv);
        return;
    }
    if(i-1>=1 && a[i-1][j]<a[i][j] && !vis[a[i-1][j]]){ //top
        vis[a[i-1][j]] = 1;
        backtrack(i-1, j, mv+1);
        vis[a[i-1][j]] = 0;
    }
    if(i+1<=n && a[i+1][j]<a[i][j] && !vis[a[i+1][j]]){ //down
        vis[a[i+1][j]] = 1;
        backtrack(i+1, j, mv+1);
        vis[a[i+1][j]] = 0;
    }
    if(j+1<=m && a[i][j+1]<a[i][j] && !vis[a[i][j+1]]){ //right
        vis[a[i][j+1]] = 1;
        backtrack(i, j+1, mv+1);
        vis[a[i][j+1]] = 0;
    }
    if(j-1>=1 && a[i][j-1]<a[i][j] && !vis[a[i][j-1]]){ //right
        vis[a[i][j-1]] = 1;
        backtrack(i, j-1, mv+1);
        vis[a[i][j-1]] = 0;
    }
}

void solve(int tc){
    string name;
    cin >> name >> n >> m;
    for(int i=0; i<=100; i++){
        for(int j=0; j<=100; j++){
            a[i][j] = 420;
        }
    }
    input2D(a, n, m);
    //print2D(a, n, m);
    mem(vis, 0);
    ans = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            mem(vis,0);
            backtrack(i, j, 0);
        }
    }
    cout << name << ": ";
    print(ans+1)
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
