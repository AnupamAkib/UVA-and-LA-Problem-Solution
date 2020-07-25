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
#define yo(x) cerr<<endl<<(#x)<<" = "<<(x)<<endl
using namespace std;
const lli inf = INT_MAX;
const int mod = 998244353;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(int a, int b){ return a>b;}

bool isPrime(int n){ //check if a number is prime or not
    //complexity = O(sqrt(n)/2)
    if(n<2){return false;}
    if(n==2 || n==3){return true;}
    if(n%2==0){return false;}
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int n;
vector<int> v;
map<int, bool> mark, dp;
void backtrack(int ind){
    if(ind == n){
        vprint(v);
        return;
    }
    for(int i=2; i<=n; i++){
        if(!mark[i]){
            if(ind<n-1){
                int x = v.back() + i;
                if(isPrime(x)){
                    mark[i] = true;
                    v.push_back(i);
                    backtrack(ind+1);
                    mark[i] = false;
                    v.pop_back();
                }
            }
            else{
                int x = v.back() + i;
                int y = v.front() + i;
                if(isPrime(x) and isPrime(y)){
                    mark[i] = true;
                    v.push_back(i);
                    backtrack(ind+1);
                    mark[i] = false;
                    v.pop_back();
                }
            }
        }
    }
}

int t = 0;
void solve(int n){
    v.clear();
    mark.clear();
    mark[1] = true;
    v.push_back(1);
    print("Case " << ++t << ":")
    backtrack(1);
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        //INPUT;
        //OUTPUT;
    #endif

    int tc = 1;
    //cin >> tc; //TEST CASE
    //for(int i=1; i<=tc; i++){
    //    solve(i);
    //}
    int r = 0;
    while(cin >> n){
        if(r!=0) nl;
        solve(n);
        r++;
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
