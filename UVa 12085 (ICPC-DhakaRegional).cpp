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
#define input2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> a[i][j];}}
#define print2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << " ";}cout<<"\n";}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i] << " ";} cout<<endl
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time nl;nl;print(point(8)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs");
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
using namespace std;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(int a, int b){ return a>b;}

void solve(int tc, lli n){
    lli numbers[n+2];
    for(int i=0; i<n; i++){
        cin >> numbers[i];
    }
    vector<pair<string, string> > ans;
    for(int i=0; i<n; i++){
        string first = to_string(numbers[i]);
        lli tmp = numbers[i];
        if(i==n-1){
            ans.push_back({first, "nai"});
        }
        bool flag=false;
        for(int j=i+1; j<n; j++){
            if(numbers[j]==tmp+1){
                flag=true;
                tmp = numbers[j];
                if(j==n-1){
                    ans.push_back({first, to_string(tmp)});
                }
            }
            else{
                if(!flag){
                    ans.push_back({first, "nai"});
                }
                else{
                    ans.push_back({first, to_string(tmp)});
                }
                break;
            }
            i++;
        }
    }

    print("Case "<<tc<<":")
    for(int i=0; i<ans.size(); i++){
        cout << 0;
        if(ans[i].second=="nai"){
            print(ans[i].first)
        }
        else{
            string x = ans[i].first;
            string y = ans[i].second;
            while(x[0] == y[0]){
                x.erase(x.begin());
                y.erase(y.begin());
            }
            print(ans[i].first<<"-"<<y)
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
    for(int i=1; ; i++){
        lli n;
        cin >> n;
        if(n==0) break;
        solve(i, n);
        nl;
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
