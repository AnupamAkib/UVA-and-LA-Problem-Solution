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
#define printcase(n) cout << "Case " << tc << ": " << n <<endl
#define printcaseii(n, m) cout << "Case " << tc << ": " << n << " " << m <<endl
#define aInput(ar, n) for(int i=0; i<n; i++)cin>>ar[i];
#define vInput(v, n) for(int i=0; i<n; i++){lli x;cin>>x;v.push_back(x);}
#define input2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> ar[i][j];}}
#define print2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << " ";}cout<<endl;}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i]; (i==vec.size()-1? cout<<endl : cout<<" ");}
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time cerr<<endl;int z=30;while(z--){cerr<<'-';}cerr<<endl;cerr<<point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs"<<endl;
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
#define IN input()
#define yo(x) cerr<<(#x)<<" = "<<(x)<<endl;
#define ff first
#define ss second
using namespace std;
const lli inf = INT_MAX;
const int mod = 100000007;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
string to_binary(lli num){if(num==0) return ""; return to_binary(num/2)+to_string(num%2);}
bool cmp(lli a, lli b){return a>b;}

typedef struct{
    int i, j;
} data;

char color[6] = {'r', 'o', 'y', 'g', 'b'};
char recycl[6] = {'P', 'G', 'A', 'S', 'N'};

vector<string> city[150];

void split(string s, int pos){
    string tmp;
    for(int i=0; i<=s.size(); i++){
        if(i==s.size() || s[i]==','){
            city[pos].push_back(tmp);
            tmp.clear();
            continue;
        }
        tmp += s[i];
    }
}

void solve(string s){
    mem(city, 0);
    int pos = 0;
    split(s, pos);
    while(1){
        cin >> s;
        if(s[0]=='e') break;
        split(s, ++pos);
    }
    int change, mini = inf, ans, same;
    for(int i=0; i<=pos; i++){
        change = 0;
        for(int j=0; j<=pos; j++){
            if(i != j){
                same = 0;
                for(int q=0; q<city[i].size(); q++){
                    for(int x=0; x<city[j].size(); x++){
                        if(city[i][q]==city[j][x]) same++;
                    }
                }
                change += (5-same);
            }
        }
        if(change < mini){
            mini = change;
            ans = i+1;
        }
    }
    print(ans)
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        //OUTPUT;
    #endif

//    int tc = 1;
//    cin >> tc; //TEST CASE
//    for(int i=1; i<=tc; i++){
//        solve(i);
//    }

    string s;
    while(cin>>s){
        if(s=="#") break;
        solve(s);
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
