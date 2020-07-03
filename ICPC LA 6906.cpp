/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<"\n";
#define PI acos(-1.0)
#define maxiii(a, b, c) max(max(a, b), c)
#define miniii(a, b, c) min(min(a, b), c)
#define nl cout<<"\n"
#define mem(ar, val) memset(ar, val, sizeof(ar))
#define point(x) fixed<<setprecision(x)
#define printcase(c, n) cout << "Case " << c << ": " << n <<endl
#define printcaseii(c, n, m) cout << "Case " << c << ": " << n << " " << m <<endl
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
    int n, k, ans=1;
    cin >> n >> k;
    int a[n+2];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    deque<pair<int, int> > p;
    vector<int> tmp;
    set<int> st;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(abs(a[i]-a[j])<=k){
                p.push_back({a[i], a[j]});
                st.insert(a[i]);
                st.insert(a[j]);
            }
        }
    }

    cout << "Case #" << tc << ": ";
    if(p.size()==0){
        cout << n << endl;
        return;
    }

    nxt:
    tmp.clear();
    tmp.push_back(p[0].first);
    tmp.push_back(p[0].second);
    map<int, bool> mark;
    mark.clear();
    mark[p[0].first]=true;
    mark[p[0].second]=true;
    p.pop_front();
    bool flag=false;

    for(int i=0; i<tmp.size(); i++){
        for(int j=0; j<p.size(); j++){
            if(p.empty()){flag=true; break;}
            if(p[j].first==tmp[i]){
                if(!mark[p[j].second]){
                    tmp.push_back(p[j].second);
                    mark[p[j].second] = true;
                }
                p.erase(p.begin()+j);
                j--;
                continue;
            }
            if(p[j].second==tmp[i]){
                if(!mark[p[j].first]){
                    tmp.push_back(p[j].first);
                    mark[p[j].first] = true;
                }
                p.erase(p.begin()+j);
                j--;
                continue;
            }
        }
        if(flag) break;
    }
    if(p.size()!=0){
        ans++;
        goto nxt;
    }
    cout << ans + (n-st.size()) << endl;
}

int main(){
    FastIO;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        //INPUT;
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
