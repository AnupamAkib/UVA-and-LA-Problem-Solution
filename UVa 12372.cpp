/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define case(res) printf("Case %d: %d\n", i, res)
#define PI acos(-1)
#define lli long long int
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)

using namespace std;
int main(){
    int n, a, b, c;
    cin >> n;
    loop(1, n, 1){
        cin >> a >> b >> c;
        if(a>20 || b>20 || c>20){
            printf("Case %d: bad\n", i);
        }
        else{
            printf("Case %d: good\n", i);
        }
    }
    return 0;
}

