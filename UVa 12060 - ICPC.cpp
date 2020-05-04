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

int digit(int n){
    int d = ceil(log10(n)+0.000000001);
    return d;
}

void solve(int tc){
    while(1){
        int n, k, N, sum=0;
        cin >> N; n=N;
        if(n==0){return;}
        while(N--){cin >> k; sum += k;}
        int a, b, c, sp;
        double avg = (double)sum/n;
        //print(avg)
        if(floor(abs(avg))-ceil(abs(avg))==0){
            print("Case "<<tc++<<":");
            if(avg<0){cout << "- ";}
            print(abs(avg));
        }
        else{
            b = abs(sum);
            c = n;
            b /= __gcd(n, abs(sum));
            c /= __gcd(n, abs(sum));
            if(abs(avg)>1){
                a = b/c;
                b %= c;
                print("Case "<<tc++<<":");
                sp = digit(a) + digit(c) - digit(b);
                if(avg<0){sp += 2;}
                while(sp--){cout << " ";}
                print(b);
                if(avg<0){cout << "- ";}
                cout << a;
                sp = digit(c);
                while(sp--){cout << "-";};
                cout << endl;
                sp = digit(a);
                if(avg<0){sp += 2;}
                while(sp--){cout << " ";};
                print(c);
            }
            else{
                print("Case "<<tc++<<":");
                sp = digit(c) - digit(b);
                if(avg<0){cout << "  ";}
                while(sp--){cout<<" ";}
                print(b);
                if(avg<0){cout << "- ";}
                sp = digit(c);
                while(sp--){cout << "-";};
                cout << endl;
                if(avg<0){cout << "  ";}
                print(c);
            }
        }
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



