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
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(int a, int b){ return a>b;}

void solve(int n){
    int cnt=0, nouka=0;
    char a[n+2][n+2];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    vector<pair<int, pair<int, int>> > save;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cnt=0;
            if(a[i][j]=='.'){
                for(int x=i-1; x>=0; x--){ //moving up
                    if(a[x][j]=='X'){break;}
                    if(a[x][j]=='.'){cnt++;}
                }
                for(int x=i+1; x<n; x++){ //moving down
                    if(a[x][j]=='X'){break;}
                    if(a[x][j]=='.'){cnt++;}
                }
                for(int x=j+1; x<n; x++){ //moving right
                    if(a[i][x]=='X'){break;}
                    if(a[i][x]=='.'){cnt++;}
                }
                for(int x=j-1; x>=0; x--){ //moving left
                    if(a[i][x]=='X'){break;}
                    if(a[i][x]=='.'){cnt++;}
                }
                save.push_back({cnt, {i, j}});
            }
        }
    }
    sort(ALL(save));
    for(int q=0; q<save.size(); q++){
        //cout << save[q].first << " - " << save[q].second.first << " " << save[q].second.second << endl;
        int i = save[q].second.first;
        int j = save[q].second.second;
        bool flag=true;
        for(int x=i-1; x>=0; x--){ //moving up
            if(a[x][j]=='X'){break;}
            if(a[x][j]=='O'){flag=false; break;}
            //if(a[x][j]=='.'){a[x][j]='O';}
        }
        for(int x=i+1; x<n; x++){ //moving down
            if(a[x][j]=='X'){break;}
            if(a[x][j]=='O'){flag=false; break;}
            //if(a[x][j]=='.'){a[x][j]='O';}
        }
        for(int x=j+1; x<n; x++){ //moving right
            if(a[i][x]=='X'){break;}
            if(a[i][x]=='O'){flag=false; break;}
            //if(a[i][x]=='.'){a[i][x]='O';}
        }
        for(int x=j-1; x>=0; x--){ //moving left
            if(a[i][x]=='X'){break;}
            if(a[i][x]=='O'){flag=false; break;}
            //if(a[i][x]=='.'){a[i][x]='O';}
        }

        if(flag){ //valid path
            nouka++;
            //cout << "* ij = " << i << " " << j << endl;
            a[i][j] = 'O';
        }
    }
    cout << nouka << endl;
}

int main(){
    FastIO;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        OUTPUT;
    #endif

    //int tc = 1;
    //cin >> tc; //TEST CASE
    int n;
    for(int i=1; ; i++){
        cin >> n;
        if(n==0) break;
        solve(n);
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}

