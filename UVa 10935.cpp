/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#include<string>
#define lli long long int
#define case(ans) printf("Case %d: %d\n", k, ans)
#define yes cout << "yes" << endl
#define no cout << "no" << endl
#define check cout << "\tOK" << endl
#define PI acos(-1.0)
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)
#define ALL(x) x.begin(), x.end()
#define rev(x) reverse(x.begin(), x.end())
#define pb(x) push_back(x)
#define ppb pop_back()
#define pf(x) push_front(x)
#define ppf pop_front()
#define mii map<int, int>
#define mci map<char, int>
#define mib map<int, bool>
#define dqi deque<int>
#define maxiii(a, b, c) max(max(a, b), c)
#define miniii(a, b, c) min(min(a, b), c)
#define vec vector<int>
#define pr pair<int, int>
/*-----------------ANUPAM AKIB-------------------*/

using namespace std;

deque<int> rem;
vector<int> threw;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    while(1){
        cin >> n;
        if(n==0){break;}
        for(int i=1; i<=n; i++){
            rem.push_back(i);
        }

        while(rem.size()>1){
            threw.push_back(rem[0]);
            rem.pop_front();

            rem.push_back(rem[0]);
            rem.pop_front();
        }
        cout << "Discarded cards:";
        if(threw.size()!=0){cout << " ";}
        for(int i=0; i<threw.size(); i++){
            cout << threw[i];
            if(i!=threw.size()-1){cout << ", ";}
        }
        cout << endl << "Remaining card: ";
        for(int i=0; i<rem.size(); i++){
            cout << rem[i];
            if(i!=rem.size()-1){cout << ", ";}
        }
        cout << endl;
        rem.clear();
        threw.clear();
    }
    return 0;
}


