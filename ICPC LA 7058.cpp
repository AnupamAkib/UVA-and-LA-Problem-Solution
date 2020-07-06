/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<"\n";
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
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i] << " ";} cout<<endl
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time nl;int z=30;while(z--){cout<<'-';}nl;print(point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs");
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
using namespace std;
const lli inf = INT_MAX;
const int mod = 100000007;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(int a, int b){ return a>b;}

void solve(int tc){
    int n, x, y;
    cin >> n;
    vector<pair<int, int> > a;
    while(n--){
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(ALL(a));
    double maxi=0.0;
    for(int i=0; i<a.size()-1; i++){
        double s = abs(a[i].second - a[i+1].second);
        double t = abs(a[i].first - a[i+1].first);
        double v = s / t;
        maxi = max(maxi, v);
    }
    cout << "Case #" << tc << ": " << point(2) << maxi << endl;
}

int main(){
    FastIO;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        OUTPUT;
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
