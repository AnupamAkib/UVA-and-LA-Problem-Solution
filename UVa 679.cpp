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
#define input2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> ar[i][j];}}
#define print2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << "";}cout<<"\n";}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i]; (i==vec.size()-1? cout<<endl : cout<<" ");}
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time nl;int z=30;while(z--){cout<<'-';}nl;print(point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs");
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
#define yo(x) cerr<<(#x)<<" = "<<(x)<<endl;
using namespace std;
const lli inf = INT_MAX;
const int mod = 998244353;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(int a, int b){ return a>b;}

int dpth, ball;
lli alreadyPassed(lli n){ //check how many balls has passed before passing current ball
    if(n==0) return 0;
    lli r = ceil((double)n/2.0)-1;
    return r;
}

lli droping(lli cur, lli passed, int cnt){
    if(cnt==dpth) return cur;
    if(passed%2){ //go right
        return droping((cur*2)+1, alreadyPassed(passed+1), cnt+1);
    }
    else{ //go left
        return droping((cur*2), alreadyPassed(passed+1), cnt+1);
    }
}

void solve(int tc){
    while(tc--){
        cin >> dpth >> ball;
        lli res;
        if(ball%2){ //left
            res = droping(2, alreadyPassed(ball), 2);
        }
        else{ //right
            res = droping(3, alreadyPassed(ball), 2);
        }
        print(res)
    }
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        //OUTPUT;
    #endif

    int tc = 1;
    /*cin >> tc; //TEST CASE
    for(int i=1; i<=tc; i++){
        solve(i);
    }*/
    while(cin>>tc){
        if(tc==-1) break;
        solve(tc);
    }


    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
