/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#include<string>
#define lli long long int
#define case(ans) printf("Case %d: %d\n", k, ans)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
//int *ar=(int *) malloc(n*sizeof(int)); dynamic memory allocation (array)
/*-----------------ANUPAM AKIB-------------------*/

using namespace std;

bool isPrime(int n){ //check if a number is prime or not
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

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    vector<int> cum_sum;

    for(int num=1; num<=505; num++){
        int gcd=0;
        for(int i=1; i<num; i++){
            for(int j=i+1; j<=num; j++){
                //gcd+=__gcd(i, j);
                int x=i, y=j, rem;
                while(x!=0){
                    rem=y%x;
                    y=x;
                    x=rem;
                }
                gcd+=y;
            }
        }
        cum_sum.push_back(gcd);
    }

    int n;

    while(scanf("%d", &n) && n!=0){
        cout << cum_sum[n-1] << endl;
    }
    return 0;
}



