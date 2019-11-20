#include<bits/stdc++.h>
#define scan(a, b) scanf("%d %d", &a, &b)
#define case(res) printf("Case %d: %d\n", i, res)
#define PI acos(-1)
#define lli long long int
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)

using namespace std;
int main(){
    int tc, n, num, high=-2;
    cin >> tc;
    loop(1, tc, 1){
        cin >> n;
        loop(1, n, 1){
            cin >> num;
            if(num>high) high=num;
        }
        case(high);
        high=-2;
    }
    return 0;
}
