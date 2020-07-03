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

void solve(int tc){
    int x, y, mov=0;
    map<pair<int, int>, bool> visited;
    set<pair<int, int> > vis;
    cin >> x >> y;
    visited[{x, y}] = true;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='R') mov++;
        else if(s[i]=='L') mov--;
        else{ //Forward
            if(abs(mov)%4==0){ //up
                y++;
            }
            else if(abs(mov)%4==1){ //left or right go forward
                mov>0? x++ : x--;
            }
            else if(abs(mov)%4==2){ //down
                y--;
            }
            else if(abs(mov%4)==3){ //left or right come backward
                mov>0? x-- : x++;
            }
            if(visited[{x, y}]){ //count as visited
                vis.insert({x, y});
            }
            else{ //mark as visited
                visited[{x, y}] = true;
            }
        }
    }
    cout << "Case #" << tc << ": ";
    cout << x << " " << y << " " << vis.size() << "\n";
}

int main(){
    FastIO;
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
