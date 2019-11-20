/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define case(res) printf("Case %d: %d\n", i, res)
#define PI acos(-1)
#define lli long long int
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)

using namespace std;
int main(){
    int i, j, cnt=0, m, n, res=-1;
    while(scanf("%d %d", &i, &j)!=EOF){
        m=i; n=j;
        if(i>j){
            swap(i, j);
        }
        for(int k=i; k<=j; k++){
            for(int z=k; ; z){
                if(z==1){cnt++; break;}
                if(z%2==0){z/=2;}
                else{z=(3*z)+1;}
                cnt++;
            }
            if(cnt>res){res=cnt;}
            cnt=0;
        }
        cout << m << " " << n << " " << res << endl;
        res=-1;

    }
    return 0;
}

