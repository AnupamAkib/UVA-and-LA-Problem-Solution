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
#define printcase(n) cout << "Case " << tc << ": " << n <<endl;
#define printcaseii(n, m) cout << "Case " << tc << ": " << n << " " << m <<endl;
#define aInput(ar, n) for(int i=0; i<n; i++)cin>>ar[i];
#define vInput(v, n) for(int i=0; i<n; i++){lli xwq;cin>>xwq;v.push_back(xwq);}
#define input2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> ar[i][j];}}
#define print2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << " ";}cout<<endl;}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i]; (i==vec.size()-1? cout<<endl : cout<<" ");}
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time cerr<<endl;int z=30;while(z--){cerr<<'-';}cerr<<endl;cerr<<point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs"<<endl;
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
#define umap unordered_map
#define IN input()
#define yo(x) cout<<(#x)<<" = "<<(x)<<endl;
#define ff first
#define ss second
#define VEC vector<lli>
#define sz size()
using namespace std;
const lli inf = INT_MAX;
const int mod = 1000007;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
string to_binary(lli num){if(num==0) return ""; return to_binary(num/2)+to_string(num%2);}
bool isPalindrome(string s){for(int i=0, j=s.size()-1; i<s.size()/2; i++, j--){if(s[i]!=s[j]) return 0;}return 1;}
bool isPrime(lli n){if(n<2){return false;}if(n==2||n==3){return true;}if(n%2==0){return false;}for(lli i=3; i*i<=n; i+=2){if(n%i==0){return false;}}return true;}
bool cmp(pair<lli, int> a, pair<lli, int> b){ return a.first>b.first;}

int NUM = 1000005;
bool mark[1000005];
vector<int> prime;

void sieve(){
    //true = not prime
    //false = prime
    for(int i=4; i<=NUM; i+=2){
        mark[i]=true;
    }
    for(int i=3; i*i<=NUM; i+=2){
        if(mark[i]==false){
            for(int j=i*i; j<=NUM; j+=(i+i)){
                mark[j]=true;
            }
        }
    }
    for(int i=2; i<=NUM; i++){
        if(mark[i]==false){
            prime.push_back(i);
        }
    }
}

bool flag[1000005];
vector<lli> seg_prime;
void segmentedSieve(lli a, lli b){
    for(lli i=0; i<b-a+5; i++) flag[i] = true;
    if(a==1){flag[0] = false;}
    for(lli i=0; (lli)prime[i]*(lli)prime[i]<=b; i++){
        lli start = (a/prime[i])*prime[i];
        if(start < a) start += prime[i];
        for(lli j=start; j<=b; j+=prime[i]){
            lli idx = j - a;
            flag[idx] = false;
        }
        if(start == prime[i]) flag[start-a] = true;
    }
    seg_prime.clear();
    for(lli i=a; i<=b; i++){
        lli idx = i-a;
        if(flag[idx]) seg_prime.push_back(i);
    }
    //vprint(seg_prime);
}

void solve(lli a, lli b){
    segmentedSieve(a, b);
    lli primeCnt = 0, prev, maxi = 0, mini = inf, min_a, min_b, max_a, max_b;
    for(lli i=a; i<=b; i++){
        if(flag[i-a]){
            primeCnt++;
            if(primeCnt==1){
                prev = i;
            }
            else if(primeCnt>=2){
                if(i-prev > maxi){
                    max_a = prev, max_b = i;
                    maxi = i-prev;
                }
                if(i-prev < mini){
                    min_a = prev, min_b = i;
                    mini = i-prev;
                }
                prev = i;
            }
        }
    }
    if(primeCnt<2){
        print("There are no adjacent primes.")
    }
    else{
        print(min_a<<","<<min_b<<" are closest, "<<max_a<<","<<max_b<<" are most distant.")
    }
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        OUTPUT;
    #endif

    sieve();

    lli tc = 1;
    //cin >> tc; //TEST CASE
    //for(int i=1; i<=tc; i++){
    //    solve(i);
    //}
    lli a, b;
    while(cin >> a >> b){
        solve(a, b);
        //segmentedSieve(a, b);
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
