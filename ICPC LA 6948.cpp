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
#define INPUT freopen("joke.in", "r", stdin)
#define OUTPUT freopen("joke.out", "w", stdout)
using namespace std;
const lli inf = INT_MAX;
const int mod = 998244353;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(int a, int b){ return a>b;}

map<int, int> range;
void CalcRange(){
    int k = 1;
    for(int i=1; i<=50; i++){
        if(i>9){
            range[i+k] = i;
            k++;
        }
        else{
            range[i] = i;
        }
    }
}

map<int, bool> mark;
vector<int> ans;

void play(string s, int i, int x, int f){
    if((x > range[s.size()] || x==0) and x!=-1){return;}
    if(mark[x]){return;}
    else{mark[x]=true;}
    if(i==s.size()){
        //print("x = "<<x)
        ans.push_back(x);
        return;
    }
    if(f==1){
        int a = s[i] - '0';
        play(s, i+1, a, 1);
        int b = ((s[i]-'0')*10) + (s[i+1] - '0');
        play(s, i+2, b, 1);
    }
    else{
        int b = ((s[i]-'0')*10) + (s[i+1] - '0');
        play(s, i+2, b, 2);
        int a = s[i] - '0';
        play(s, i+1, a, 2);
    }
    if(x>0 and ans.size()>0) ans.push_back(x);
    else mark[x]=false;
}

void solve(string s){
    ans.clear();
    mark.clear();
    play(s, 0, -1, 1);
    //print(ans.size());
    //print(range[s.size()])
    if(ans.size() != range[s.size()]){
        ans.clear();
        mark.clear();
        play(s, 0, -1, 2);
    }
    reverse(ALL(ans));
    vprint(ans);
}

int main(){
    ANUPAM_AKIB;
    //#ifndef ONLINE_JUDGE
        //clock_t tStart = clock();
        INPUT;
        OUTPUT;
    //#endif

    int tc = 1;
    //cin >> tc; //TEST CASE
    //for(int i=1; i<=tc; i++){
    //    solve(i);
    //}
    CalcRange();
    string s;
    while(cin>>s){
        solve(s);
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
