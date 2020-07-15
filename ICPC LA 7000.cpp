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
#define input2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> a[i][j];}}
#define print2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << " ";}cout<<"\n";}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i]; (i==vec.size()-1? cout<<endl : cout<<" ");}
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time nl;int z=30;while(z--){cout<<'-';}nl;print(point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs");
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
using namespace std;
const lli inf = INT_MAX;
const int mod = 998244353;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(int a, int b){ return a>b;}

void solve(int tc){
    map<pair<int, int>, char> edge;
    map<pair<int, int>, pair<pair<int, int>, char>> next;
    vector<pair<int, int> > tmp;
    vector<int> ans;
    int n, m, l, x, y;
    cin >> n >> m >> l;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        edge[{x, y}] = 'R';
        edge[{x+1, y}] = 'L';
    }
    for(int i=0; i<n; i++){ //flag edge for top
        edge[{i, 0}] = 'D';
    }
    edge[{10001, 10001}] = 'X'; //flag edge for bottom

    for(pair<pair<int, int>, char> p : edge){
        tmp.push_back({p.first.first, p.first.second});
    }
    for(int i=0; i<tmp.size()-1; i++){
        next[{tmp[i].first, tmp[i].second}] = {{tmp[i+1].first, tmp[i+1].second}, edge[{tmp[i+1].first, tmp[i+1].second}]};
    }
    /*for(pair<pair<int, int>, char> p : edge){
        cout << p.first.first << ' ';
        cout << p.first.second << ' ' << p.second << endl;
    }*/
    pair<pair<int, int>, char> p, nx;
    for(int i=0; i<n; i++){
        int k = i;
        nx = next[{i, 0}];
        abar:
        p = nx;
        if(p.first.first == k){
            if(p.second == 'R'){
                k++;
            }
            else if(p.second == 'L'){
                k--;
            }
            x = k;
            y = p.first.second;
            nx = next[{x, y}];
            goto abar;
        }
        ans.push_back(k);
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << "\n";
    }
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
