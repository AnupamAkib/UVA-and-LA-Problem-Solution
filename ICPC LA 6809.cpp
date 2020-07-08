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
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
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

string hexToBin(string s){
    string res="";
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0') res += "0000";
        if(s[i]=='1') res += "0001";
        if(s[i]=='2') res += "0010";
        if(s[i]=='3') res += "0011";
        if(s[i]=='4') res += "0100";
        if(s[i]=='5') res += "0101";
        if(s[i]=='6') res += "0110";
        if(s[i]=='7') res += "0111";
        if(s[i]=='8') res += "1000";
        if(s[i]=='9') res += "1001";
        if(s[i]=='A') res += "1010";
        if(s[i]=='B') res += "1011";
        if(s[i]=='C') res += "1100";
        if(s[i]=='D') res += "1101";
        if(s[i]=='E') res += "1110";
        if(s[i]=='F') res += "1111";
    }
    return res;
}

void solve(int tc){
    string a, b;
    cin >> a >> b;
    a = hexToBin(a);
    b = hexToBin(b); //fixed
    while(a.size()!=32) a.insert(a.begin(), '0');
    while(b.size()!=32) b.insert(b.begin(), '0');
    //print(a)
    //print(b)
    string tmp = a; //left
    int cnt1 = 0;
    while(tmp != b){
        if(cnt1==32) break;
        char c = tmp[0];
        tmp.erase(tmp.begin());
        tmp += c;
        cnt1++;
    }

    tmp = a; //right
    int cnt2 = 0;
    while(tmp != b){
        if(cnt2==32) break;
        char c = tmp[31];
        tmp.erase(tmp.begin()+31);
        tmp.insert(tmp.begin(), c);
        cnt2++;
    }
    cout << "Case #" << tc << ": ";
    if(cnt1 < cnt2){
        cout << cnt1 << " Left" << endl;
    }
    else if(cnt1 > cnt2){
        cout << cnt2 << " Right" << endl;
    }
    else if(cnt1 == cnt2 and cnt1 != 32){
        cout << cnt1 << " Any" << endl;
    }
    else{
        cout << "Not possible" << endl;
    }
}

int main(){
    ANUPAM_AKIB;
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
