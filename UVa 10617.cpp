/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define ALL(x) x.begin(), x.end()
#define PI acos(-1.0)
#define nl cout<<"\n"
#define print(x) cout<<x<<endl;
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
#define _IN input()
#define IN input()
#define yo(x) cout<<(#x)<<" = "<<(x)<<endl;
#define ff first
#define ss second
#define VEC vector<lli>
#define sz size()
using namespace std;
const lli inf = INT_MAX;
const int mod = 1e9+7;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
string to_binary(lli num){if(num==0) return ""; return to_binary(num/2)+to_string(num%2);}
lli to_decimal(string s){lli r = 0, p = 1;for(int i=s.sz-1; i>=0; i--){if(s[i] == '1') r += p; p *= 2;}return r;}
bool isPalindrome(string s){for(int i=0, j=s.size()-1; i<s.size()/2; i++, j--){if(s[i]!=s[j]) return 0;}return 1;}
bool isPrime(lli n){if(n<2){return false;}if(n==2||n==3){return true;}if(n%2==0){return false;}for(lli i=3; i*i<=n; i+=2){if(n%i==0){return false;}}return true;}
bool cmp(pair<lli, lli> a, pair<lli, lli> b){
    return a.ff<b.ff;
}

string sum(string a, string b){
    string ans;
    int len_a=a.size();
    int len_b=b.size();
    if(len_a<len_b){
        for(int i=1; i<=abs(len_a-len_b); i++){
            a.insert(a.begin(), '0');
        }
    }
    else if(len_a>len_b){
        for(int i=1; i<=abs(len_a-len_b); i++){
            b.insert(b.begin(), '0');
        }
    }
    int carry=0, tmp;
    for(int i=a.size()-1; i>=0; i--){
        tmp=(a[i]-48 + b[i]-48) + carry;
        if(tmp>=10){
            carry = 1;
            ans.insert(ans.begin(), (tmp%10)+48);
        }
        else{
            carry = 0;
            ans.insert(ans.begin(), tmp+48);
        }
    }
    if(carry!=0){
        ans.insert(ans.begin(), carry+48);
    }
    while(ans[0]=='0'){
        ans.erase(ans.begin());
    }
    return ans;
}

lli DP[100][100];
string s;

lli dp_call(int l, int r){
    if(l==r) return 1;
    if(l>r) return 0;
    if(DP[l][r] != -1) return DP[l][r];
    lli ret = 0;
    if(s[l]==s[r]){
        ret = dp_call(l+1, r) + dp_call(l, r-1) + 1;
    }
    else{
        ret = dp_call(l+1, r) + dp_call(l, r-1) - dp_call(l+1, r-1);
    }
    return DP[l][r]=ret;
}

void solve(int tc){
    cin >> s;
    mem(DP, -1);
    lli ans = dp_call(0, s.sz-1);
    print(ans)
}

int main(){
    ANUPAM_AKIB;
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
    //while(cin >> tc && tc!=-1) solve(tc);

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
