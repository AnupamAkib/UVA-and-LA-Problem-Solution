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
#define ff first
#define ss second
using namespace std;
const lli inf = INT_MAX;
const int mod = 1000000007;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}

bool cmp(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b){
    if(a.second.first == b.second.first) return a.second.second < b.second.second;
    return a.second.first > b.second.first;
}
bool lexo(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b){
    return a.first < b.first;
}

void solve(int tc){
    vector<pair<string, pair<int, int>> > v;
    string s;
    int attack, defend;
    for(int i=0; i<10; i++){
        cin >> s >> attack >> defend;
        v.push_back({s, {attack, defend}});
    }
    sort(ALL(v), lexo);
    sort(ALL(v), cmp);
    sort(v.begin(), v.begin()+5, lexo);
    sort(v.begin()+5, v.end(), lexo);
    //lets print
    cout << "Case " << tc << ":\n(";
    for(int i=0; i<5; i++){
        cout << v[i].first << (i<4? ", " : ")");
    }
    cout << "\n(";
    for(int i=5; i<10; i++){
        cout << v[i].first << (i<9? ", " : ")");
    }
    cout << "\n";
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
