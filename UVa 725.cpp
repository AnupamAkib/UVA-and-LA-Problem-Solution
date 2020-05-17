/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<"\n";
#define cases(x, y) for(int x=1; x<=y; x++)
#define PI acos(-1.0)
#define maxiii(a, b, c) max(max(a, b), c)
#define miniii(a, b, c) min(min(a, b), c)
#define nl cout<<"\n"
#define point(x) fixed<<setprecision(x)
#define printcase(c, n) cout << "Case " << c << ": " << n <<endl
#define printcaseii(c, n, m) cout << "Case " << c << ": " << n << " " << m <<endl
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i] << " ";} cout<<endl
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time nl;nl;print(point(8)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs");
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
using namespace std;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
bool cmp(pair<int, int> a, pair<int, int> b){
    return (a.first*a.second)>(b.first*b.second);
}

int digitCNT(int n){
    return ceil(log10(n)+0.00000001);
}

string isValid(int n, int m){
    set<int> a;
    int N = n, M = m, zero=0;
    while(N>0){
        a.insert(N%10);
        if(N%10==0){zero++;}
        N /= 10;
    }
    while(M>0){
        a.insert(M%10);
        if(M%10==0){zero++;}
        M /= 10;
    }

    if(a.size()==10){
        return to_string(m);
    }
    else if(a.size()==9 and digitCNT(m)==4 && !zero){
        string s=to_string(m);
        s.insert(s.begin(), '0');
        return s;
    }
    return "invalid";
}

void solve(int n){
    vector<pair<int, string> > ans;
    ans.clear();
    for(int i=98765; digitCNT(i)!=4; i--){
        int m = i/n;
        if(m*n==i){
            if(isValid(i, m) != "invalid"){
                ans.push_back({i, isValid(i, m)});
            }
        }
    }
    if(ans.size()==0){
        cout << "There are no solutions for " << n  << "." << endl;
    }
    else{
        sort(ALL(ans));
        for(int i=0; i<ans.size(); i++){
            cout << ans[i].first << " / " << ans[i].second << " = " << n << endl;
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
    //for(int i=1; i<=tc; i++){
    //    solve(i);
    //}
    int n, c=1;
    while(cin >> n && n){
        if(c>1){nl;}
        solve(n);
        c++;
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
