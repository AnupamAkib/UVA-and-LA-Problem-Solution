/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
const int mod = 100000;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
string to_binary(lli num){if(num==0) return ""; return to_binary(num/2)+to_string(num%2);}
bool isPalindrome(string s){for(int i=0, j=s.size()-1; i<s.size()/2; i++, j--){if(s[i]!=s[j]) return 0;}return 1;}
bool isPrime(lli n){if(n<2){return false;}if(n==2||n==3){return true;}if(n%2==0){return false;}for(lli i=3; i*i<=n; i+=2){if(n%i==0){return false;}}return true;}
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.ff>b.ff;
}

lli a[35];
//bool a[4][32];

/*lli call(int n, int i, int j){ //backtrack solution
    if(j>=n){
        i++, j=0;
        if(i==3) return 1;
    }
    lli r=0;
    if(a[i][j]){ //not available, go ahead
        r += call(n, i, j+1);
    }
    else{
        if(j+1<n && !a[i][j+1]){ //horizontal
            a[i][j] = a[i][j+1] = 1;
            r += call(n, i, j+2);
            a[i][j] = a[i][j+1] = 0;
        }
        if(i+1<3 && !a[i+1][j]){ //vertical
            a[i][j] = a[i+1][j] = 1;
            r += call(n, i, j+1);
            a[i][j] = a[i+1][j] = 0;
        }
    }
    return r;
}*/

void precal(){
    a[0] = 1;
    a[1] = 0;
    a[2] = 3;
    a[3] = 0;
    a[4] = 11;
    a[5] = 0;
    a[6] = 41;
    a[7] = 0;
    a[8] = 153;
    a[9] = 0;
    a[10] = 571;
    a[11] = 0;
    a[12] = 2131;
    a[13] = 0;
    a[14] = 7953;
    a[15] = 0;
    a[16] = 29681;
    a[17] = 0;
    a[18] = 110771;
    a[19] = 0;
    a[20] = 413403;
    a[21] = 0;
    a[22] = 1542841;
    a[23] = 0;
    a[24] = 5757961;
    a[25] = 0;
    a[26] = 21489003;
    a[27] = 0;
    a[28] = 80198051;
    a[29] = 0;
    a[30] = 299303201;
}

void solve(lli tc){
    print(a[tc])
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        OUTPUT;
    #endif

    lli tc = 1;
    /*cin >> tc; //TEST CASE
    for(int i=1; i<=tc; i++){
        solve(i);
    }*/
    precal();
    while(cin >> tc && tc!=-1) solve(tc);

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
