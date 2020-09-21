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
#define yo(x) cerr<<(#x)<<" = "<<(x)<<endl;
#define ff first
#define ss second
using namespace std;
const lli inf = INT_MAX;
const int mod = 20000;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(lli a, lli b){return a>b;}

map<int, int> freq;

void solve(int n, int m){
    vector<int> v;
    freq.clear();
    int dragon[n+3], ind, knight, gold;
    aInput(dragon, n);
    for(int i=0; i<m; i++){
        cin >> knight;
        v.push_back(knight);
        freq[knight]++;
    }
    sort(ALL(v));
    sort(dragon, dragon+n);
    knight = gold = 0;
    for(int i=0; i<n; i++){
        int key = dragon[i];
        again:
        ind = lower_bound(ALL(v), key) - v.begin();
        if(ind!=m){
            if(freq[v[ind]]>0){
                gold += v[ind];
                knight++;
                freq[v[ind]]--;
            }
            else{key=v[ind]+1; goto again;}
        }
    }
    if(knight == n){
        print(gold)
    }
    else{
        print("Loowater is doomed!")
    }
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        OUTPUT;
    #endif

//    int tc = 1;
//    cin >> tc; //TEST CASE
//    for(int i=1; i<=tc; i++){
//        solve(i);
//    }

    int n, m;
    while(cin>>n>>m){
        if(n+m==0) break;
        solve(n, m);
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
