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

string preliEncode(string s){
    map<char, int> code;
    code['A'] = 0; code['E'] = 0; code['I'] = 0; code['O'] = 0;
    code['U'] = 0; code['Y'] = 0; code['W'] = 0; code['H'] = 0;
    code['B'] = 1; code['P'] = 1; code['F'] = 1; code['V'] = 1;
    code['C'] = 2; code['S'] = 2; code['K'] = 2; code['G'] = 2;
    code['J'] = 2; code['Q'] = 2; code['X'] = 2; code['Z'] = 2;
    code['D'] = 3; code['T'] = 3; code['L'] = 4; code['M'] = 5;
    code['N'] = 5; code['R'] = 6;
    string res = "";
    for(int i=0; i<s.size(); i++){
        res += to_string(code[s[i]]);
    }
    return res;
}

void spaces(string s){
    for(int i=0; i<25-s.size(); i++){
        cout << ' ';
    }
}

void solve(string s){
    string cd = preliEncode(s);
    for(int i=0; i<cd.size(); i++){
        while(1){
            if(i==cd.size()-1) break;
            if(cd[i]==cd[i+1]) cd.erase(cd.begin()+i);
            else break;
        }
    }
    //print(cd)
    string ans;
    ans += s[0];
    for(int i=1, j=0; i<cd.size(); i++){
        if(j==3) break;
        if(cd[i] != '0'){
            ans += cd[i];
            j++;
        }
    }
    int k=9; while(k--) cout << ' ';
    cout << s;
    spaces(s);
    cout << ans;
    int z = 4-ans.size(); while(z--) cout << 0;
    nl;
}

int main(){
    FastIO;
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

    int k=9; while(k--) cout << ' ';
    cout << "NAME";
    k=21; while(k--) cout << ' ';
    cout << "SOUNDEX CODE\n";
    string s;
    while(cin >> s){
        solve(s);
    }
    k=19; while(k--) cout << ' ';
    print("END OF OUTPUT")


    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
