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

bool isPrime(int n){
    //complexity = O(n/4)
    if(n<2){return false;}
    if(n==2 || n==3){return true;}
    if(n%2==0){return false;}
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    seive();
    //cout << isPrime(9);
    int n, a[5];
    while(scanf("%d", &n)!=EOF){
        if(n<8){
            cout << "Impossible." << endl;
            continue;
        }

        if(n%2==0){
            a[0]=a[1]=2;
            n-=4;
        }
        else{
            a[0]=2; a[1]=3;
            n-=5;
        }
        for(int i=0; ; i++){
            if(isPrime(n-prime[i])==true){
                a[2]=prime[i]; a[3]=n-prime[i];
                break;
            }
        }
        sort(a, a+4);
        for(int i=0; i<4; i++){
            cout << a[i];
            if(i!=3){cout << " ";}
        }
        cout << endl;
    }
    return 0;
}
