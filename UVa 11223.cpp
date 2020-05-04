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
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}

void solve(int tc){
    map<string, char> db;
    db[".-"] = 'A';
    db["-..."] = 'B';
    db["-.-."] = 'C';
    db["-.."] = 'D';
    db["."] = 'E';
    db["..-."] = 'F';
    db["--."] = 'G';
    db["...."] = 'H';
    db[".."] = 'I';

    db[".---"] = 'J';
    db["-.-"] = 'K';
    db[".-.."] = 'L';
    db["--"] = 'M';
    db["-."] = 'N';
    db["---"] = 'O';
    db[".--."] = 'P';
    db["--.-"] = 'Q';
    db[".-."] = 'R';

    db["..."] = 'S';
    db["-"] = 'T';
    db["..-"] = 'U';
    db["...-"] = 'V';
    db[".--"] = 'W';
    db["-..-"] = 'X';
    db["-.--"] = 'Y';
    db["--.."] = 'Z';
    db["-----"] = '0';

    db[".----"] = '1';
    db["..---"] = '2';
    db["...--"] = '3';
    db["....-"] = '4';
    db["....."] = '5';
    db["-...."] = '6';
    db["--..."] = '7';
    db["---.."] = '8';
    db["----."] = '9';

    db[".-.-.-"] = '.';
    db["--..--"] = ',';
    db["..--.."] = '?';
    db[".----."] = '\'';
    db["-.-.--"] = '!';
    db["-..-."] = '/';
    db["-.--."] = '(';
    db["-.--.-"] = ')';
    db[".-..."] = '&';

    db["---..."] = ':';
    db["-.-.-."] = ';';
    db["-...-"] = '=';
    db[".-.-."] = '+';
    db["-....-"] = '-';
    db["..--.-"] = '_';
    db[".-..-."] = '\"';
    db[".--.-."] = '@';

    int tcc;
    cin >> tcc;
    cin.ignore();
    for(int kk=1; kk<=tcc; kk++){
        string s, tmp, ans="";
        getline(cin, s);
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                if(s[i-1]==' '){ans += ' '; continue;}
                ans += db[tmp];
                tmp.clear();
                continue;
            }
            else if(i==s.size()-1){
                tmp += s[i];
                ans += db[tmp];
                tmp.clear();
                continue;
            }
            tmp += s[i];
        }
        print("Message #"<<kk);
        print(ans)
        if(kk!=tcc)nl;
    }
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
    for(int i=1; i<=tc; i++){
        solve(i);
    }
    /*string s;
    while(cin>>s){
        solve(s);
    }*/

    #ifndef ONLINE_JUDGE
        //printf("\n**Time -> %.5fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
        //nl;nl; print(point(5) << "**Time -> " << (double)(clock()-tStart) / CLOCKS_PER_SEC << "fs");
    #endif
    return 0;
}



