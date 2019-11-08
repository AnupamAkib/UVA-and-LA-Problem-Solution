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
    for(int i=2; i<=NUM; i++){
        if(mark[i]==false){
            prime.push_back(i);
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


vector<int> divi;
void divisor(int n){
    //complexity = O(sqrt(n))
    divi.clear();
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            if(i==n/i){
                divi.push_back(i);
            }
            else{
                divi.push_back(i);
                divi.push_back(n/i);
            }
        }
    }
    sort(ALL(divi));
}

int divisor_cnt(int n){
    //complexity = O(sqrt(n))
    int cnt=0;
    if(isPrime(n)==true){
        return 2;
    }
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            if(i==n/i){
                cnt++;
            }
            else{
                cnt+=2;
            }
        }
    }
    return cnt;
}

void factor(int n){
    divisor(n);
    divi.pop_back();
    divi.erase(divi.begin());
}


int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int lower, upper, t, last, odd, k, cnt, sum;
    scanf("%d", &t);
    while(t--){
        cnt=0;
        scanf("%d %d", &lower, &upper);

        if(lower<=2){cnt++;}
        if(lower%2==0){
            lower++;
        }

        for(int i=lower; i<=upper; i+=2){
            k=i; odd=0; sum=0;
            while(k!=0){
                last=(k%10);
                sum+=last;
                if(last%2==1){
                    odd++;
                }
                k/=10;
            }

            if(isPrime(i)==true && (odd%2==1 || sum==2 || sum==3 || sum==5 || sum==7)){
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}


