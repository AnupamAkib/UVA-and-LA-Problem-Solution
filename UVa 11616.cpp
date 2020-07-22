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

int RomanToNumeric(string s){
    map<char, int> rom;
    rom['I'] = 1;
    rom['V'] = 5;
    rom['X'] = 10;
    rom['L'] = 50;
    rom['C'] = 100;
    rom['D'] = 500;
    rom['M'] = 1000;
    int ans=0;
    bool flag=false;
    for(int i=s.size()-1; i>0; i--){
        if(rom[s[i-1]] < rom[s[i]]){
            int tmp = rom[s[i]];
            tmp -= rom[s[i-1]];
            ans += tmp;
            if(i-1==0) flag=true;
            i--;
            continue;
        }
        ans += (rom[s[i]]);
    }
    if(!flag) ans += rom[s[0]];
    return ans;
}

string NumericToRoman(string s){
    int n=0;
    for(int i=0; i<s.size(); i++){ //convert to integer
        n *= 10;
        n += (s[i]-'0');
    }
    string ans="";
    map<int, string> exc;
    exc[4] = "IV";
    exc[9] = "IX";
    exc[40] = "XL";
    exc[90] = "XC";
    exc[400] = "CD";
    exc[900] = "CM";
    exc[1] = "I";
    exc[2] = "II";
    exc[3] = "III";
    exc[5] = "V";
    exc[6] = "VI";
    exc[7] = "VII";
    exc[8] = "VIII";
    exc[10] = "X";
    exc[20] = "XX";
    exc[30] = "XXX";
    exc[50] = "L";
    exc[60] = "LX";
    exc[70] = "LXX";
    exc[80] = "LXXX";
    exc[100] = "C";
    exc[200] = "CC";
    exc[300] = "CCC";
    exc[500] = "D";
    exc[600] = "DC";
    exc[700] = "DCC";
    exc[800] = "DCCC";
    exc[1000] = "M";
    exc[2000] = "MM";
    exc[3000] = "MMM";

    while(n>0){
        int root = (int)(n/pow(10, digitCNT(n)-1))*pow(10, digitCNT(n)-1);
        for(pair<int, string> p : exc){
            if(p.first == root){
                ans += p.second;
            }
        }
        n %= root;
    }
    return ans;
}

void solve(string s){
    bool isNumber = false;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            isNumber = true;
            break;
        }
    }
    if(isNumber){
        cout << NumericToRoman(s) << endl;
    }
    else{
        cout << RomanToNumeric(s) << endl;
    }
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        OUTPUT;
    #endif

    int tc = 1;
    //cin >> tc; //TEST CASE
    //for(int i=1; i<=tc; i++){
    //    solve(i);
    //}
    string s;
    while(cin >> s){
        solve(s);
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
