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
vector<int> prime, digit_prime;

void sieve(){
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

}

bool isPrime(int n){
    //complexity = O(sqrt(n)/2)
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

map<int, int> cumulative_series;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //sieve();

    int k, sum, cumulative_cnt=0;

    for(int i=1; i<=1000000; i++){
        if(isPrime(i)==true){
            k=i;
            sum=0;
            while(k!=0){
                sum+=(k%10);
                k/=10;
            }
            if(isPrime(sum)==true){
                cumulative_cnt++;
            }
            cumulative_series[i]=cumulative_cnt;
        }
        else{
            cumulative_series[i]=cumulative_cnt;
        }
    }

    int lower, upper, t;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &lower, &upper);
        printf("%d\n", cumulative_series[upper]-cumulative_series[lower-1]);
    }
    return 0;
}


