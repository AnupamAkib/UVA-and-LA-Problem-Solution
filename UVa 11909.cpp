/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define case(res) printf("Case %d: %d\n", i, res)
#define PI acos(-1)
#define lli long long int
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)

using namespace std;
int main(){
    double l, w, h, ang, lombo, dhele_dei_area, total_area, x, b;
    while(scanf("%lf %lf %lf %lf", &l, &w, &h, &ang)!=EOF){
        x=tan((90-ang)*(PI/180))*h;
        b=l-x;
        if(b<=0){
            lombo=tan(ang*(PI/180))*l;
            dhele_dei_area=(0.5*l*lombo)*w;
            total_area=l*h*w;
            cout << npoint(3) << total_area-dhele_dei_area << " mL" << endl;
        }
        else{
            total_area=0.5*h*x*w;
            cout << npoint(3) << total_area << " mL" << endl;
        }
    }
    return 0;
}
