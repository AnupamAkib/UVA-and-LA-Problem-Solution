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
#define NUM 1000000
/*-----------------ANUPAM AKIB-------------------*/

using namespace std;

map<int, bool> mark;
vector<int> prime;

void seive(){
    //true = not prime
    //false = prime
    //complexity = O(1)
    for(int i=4; i<=NUM; i+=2){
        mark[i]=true;
    }
    for(int i=3; i*i<=NUM; i+=2){
        if(mark[i]==false){
            for(int j=i*i; j<=NUM; j+=(i+i)){
                mark[j]=true;
            }
        }
    }
    for(int i=2; i<=NUM; i++){
        if(mark[i]==false){
            prime.push_back(i);
        }
    }
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    seive();
    int n;
    while(cin >> n && n!=0){
        int cnt=0;
        for(int i=0; prime[i]<=n/2; i++){
            if(mark[n-prime[i]]==false){
                //cout << n << " = " << prime[i] << " + " << n-prime[i] << endl;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}





