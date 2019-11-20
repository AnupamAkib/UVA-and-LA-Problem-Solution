#include<bits/stdc++.h>
#define scan(a, b) scanf("%d %d", &a, &b)
#define case(res) printf("Case %d: %d\n", i, res)
#define PI acos(-1)
#define lli long long int
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)

using namespace std;
int main(){
    int tc, e, f, c;
    int cnt=0, r, v;
    cin >> tc;
    while(tc--){
        cin >> e >> f >> c;
        e=e+f;
        while(1){
            cnt+=(e/c);
            r=(e/c)+(e%c);
            if(r<c){break;}
            e=r;
        }
        cout << cnt << endl;
        cnt=0;
    }
    return 0;
}
