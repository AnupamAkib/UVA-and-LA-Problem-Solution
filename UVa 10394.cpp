/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#include<string>
#define lli long long int
#define case(ans) printf("Case %d: %d\n", k, ans)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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

vector <int> prime;
vector <pair<int,int> > twin;
int flag[20000005];

int main(){
    for(int i=4; i<=20000000; i+=2){
        flag[i]=1;
    }
    for(int i=3; i*i<=20000000; i+=2){
        if(flag[i]==0){
            for(int j=i*i; j<=20000000; j+=i*2){
                flag[j]=1;
            }
        }
    }

    for(int i=3; i<=20000000; i+=2){
        if(flag[i]==0){
            prime.push_back(i);
        }
    }
    int j=1, s;
    for(int i=0; i<prime.size(); i++){
        if(prime[i]+2==prime[i+1]){
            twin.push_back(make_pair(prime[i], prime[i+1]));
        }
    }
    while(scanf("%d", &s)!=EOF){
        cout << "(" << twin[s-1].first << ", " << twin[s-1].second << ")" << endl;
    }
    return 0;
}
