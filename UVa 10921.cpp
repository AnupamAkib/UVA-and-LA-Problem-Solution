/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<endl;
#define cases(x, y) for(int x=1; x<=y; x++)
#define PI acos(-1.0)
#define maxiii(a, b, c) max(max(a, b), c)
#define miniii(a, b, c) min(min(a, b), c)
#define nl cout<<"\n";
#define scanINT(n) int n;cin>>n;
#define scanLL(n) long long n;cin>>n;
#define scanCHAR(n) char n;cin>>n;
#define scanSTRING(n) string n;cin>>n;
#define scanDOUBLE(n) double n;cin>>n;
#define point(x) fixed<<setprecision(x)
#define printcase(c, n) cout << "Case " << c << ": " << n <<endl;
#define printcaseii(c, n, m) cout << "Case " << c << ": " << n << " " << m <<endl;
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i] << " ";}cout<<endl;
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define INPUT freopen("input.txt", "r", stdin);
#define OUTPUT freopen("output.txt", "w", stdout);
using namespace std;
lli input(){lli x; cin >> x; return x;}

char convert(char x){
    if(x>='A' && x<='C') return '2';
    if(x>='D' && x<='F') return '3';
    if(x>='G' && x<='I') return '4';
    if(x>='J' && x<='L') return '5';
    if(x>='M' && x<='O') return '6';
    if(x>='P' && x<='S') return '7';
    if(x>='T' && x<='V') return '8';
    if(x>='W' && x<='Z') return '9';
    return x;
}

void solve(string s){
    for(int i=0; i<s.size(); i++){
        cout << convert(s[i]);
    }
    nl;
}

int main(){
    FastIO;
    //INPUT;
    //OUTPUT;

    int tc = 1;
    //cin >> tc;
    /*for(int i=1; i<=tc; i++){
        solve(i);
    }*/
    string s;
    while(cin>>s){
        solve(s);
    }
    return 0;
}



