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
    for(lli i=3; i*i<=n; i+=2){
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

void factor(int n){
    divisor(n);
    divi.pop_back();
    divi.erase(divi.begin());
}


int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n<10){
            cout << n << endl;
            continue;
        }

        if(isPrime(n)==true){
            cout << -1 << endl;
            continue;
        }

        factor(n);
        int one_digit[20], k=0;
        for(int i=0; i<divi.size(); i++){
            if(divi[i]/10==0){
                one_digit[k]=divi[i];
                k++;
            }
            else{
                break;
            }
        }
        sort(one_digit, one_digit+k, greater<int>());
        vector<int> ans;
        bool flag=true;
        ans.clear();
        int cnt=0;
        for(int i=0; n!=1; i++){
            if(cnt==k){flag=false; break;}
            if(n%one_digit[i]==0){
                n/=one_digit[i];
                ans.push_back(one_digit[i]);
                i--;
            }
            else{
                cnt++;
            }
            if(i==k-1){i=-1;}
        }
        if(flag==true){
            sort(ALL(ans));
            for(int i=0; i<ans.size(); i++){
                cout << ans[i];
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}


