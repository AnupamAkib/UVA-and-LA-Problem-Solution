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

double p, q, r, s, t, u;

double equation(double x){
    x=(p*exp(-x))+(q*sin(x))+(r*cos(x))+(s*tan(x))+(t*x*x)+u;
    return x;
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    while(scanf("%lf %lf %lf %lf %lf %lf", &p, &q, &r, &s, &t, &u)!=EOF){
        int cnt=0;
        double res, start=0, endd=1.0, mid;
        while(start<=endd){
            mid=(start+endd)/2.0;
            res=equation(mid);
            if(abs(res-0)<=0.00000001){
                cout << fixed << setprecision(4) << mid << endl;
                break;
            }
            else if(res>0){
                start=mid;
            }
            else{
                endd=mid;
            }
            cnt++;
            if(cnt==1000){
                cout << "No solution" << endl;
                break;
            }
        }
    }

    return 0;
}

