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
bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.second!=b.second) return a.second<b.second;
    else return a.first<b.first;
}

int n, m, l, A, B;
string name;

void split(string s){
    int i = 0; name.clear(); A=0; B=0;
    while(s[i]!=':'){name += s[i]; i++;}
    i++;
    while(isdigit(s[i])){
        A*=10, A+=(s[i]-'0');
        i++;
    }
    i++;
    while(isdigit(s[i])){
        B*=10, B+=(s[i]-'0');
        i++;
    }
}

lli dp[100010];

lli call(lli N){
    if(N==m) return 0;
    if(N<m) return inf;
    if(dp[N] != -1) return dp[N];
    lli mini = inf;
    mini = min(A+call(N-1), B+call(N/2));
    return dp[N]=mini;
}

void solve(int tc){
    n = IN, m = IN, l = IN;
    string s;
    vector<pair<string, int> > ans;
    while(l--){
        cin >> s;
        split(s);
        mem(dp, -1);
        ans.push_back({name, call(n)});
    }
    print("Case "<<tc)
    sort(ALL(ans), cmp);
    for(auto p : ans){
        cout << p.first << ' ' << p.second << endl;
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
