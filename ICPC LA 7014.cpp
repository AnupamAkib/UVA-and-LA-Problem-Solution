/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<"\n";
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
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i] << " ";} cout<<endl
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time nl;int z=30;while(z--){cout<<'-';}nl;print(point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs");
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
using namespace std;
const lli inf = INT_MAX;
const int mod = 100000007;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}

typedef struct{
    int tID;
    char pID;
    string tm;
    string ver;
} ds;

bool cmp(ds a, ds b){ return a.tm<b.tm;}

bool checkIdeal(map<int, int> teamInfo, map<char, int> problemInfo, int TotalTeam, int TotalProblem){
    for(int i=1; i<=TotalTeam; i++){
        if(!teamInfo[i] or teamInfo[i]==TotalProblem){
            return false;
        }
    }
    for(int i='A'; i<'A'+TotalProblem; i++){
        if(!problemInfo[i] or problemInfo[i]==TotalTeam){
            return false;
        }
    }
    return true;
}

void solve(int team, int problem, int submission){
    int mark[160][500];
    mem(mark, -1);
    int teamID;
    char problemID;
    string time, verdict, answer;
    map<int, int> teamInfo;
    map<char, int> problemInfo;
    vector<ds> sub;
    bool flag=false, done=false;
    //cin.ignore();
    while(submission--){
        cin >> teamID >> problemID >> time;
        getline(cin, verdict);
        sub.push_back({teamID, problemID, time, verdict});
    }
    //sort by time
    sort(ALL(sub), cmp);

    for(int i=0; i<sub.size(); i++){
        teamID = sub[i].tID;
        problemID = sub[i].pID;
        time = sub[i].tm;
        verdict = sub[i].ver;
        if(verdict == " Yes" and !done and mark[teamID][problemID]==-1){
            teamInfo[teamID]++;
            problemInfo[problemID]++;
            bool ideal = checkIdeal(teamInfo, problemInfo, team, problem);
            if(ideal and !flag){
                answer = time;
                flag=true;
            }
            else if(!ideal and flag){
                answer += " ";
                answer += time;
                done=true;
            }
            mark[teamID][problemID] = 0;
        }
    }

    if(answer.size()==8){
        answer += " --:--:--";
    }
    else if(answer.size()==0){
        answer = "--:--:-- --:--:--";
    }
    print(answer)
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        //OUTPUT;
    #endif

    //int tc = 1;
    //cin >> tc; //TEST CASE
    //for(int i=1; i<=tc; i++){
    //    solve(i);
    //}
    int team, problem, submission;
    while(cin >> team >> problem >> submission){
        if(team+problem+submission==0) break;
        solve(team, problem, submission);
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
