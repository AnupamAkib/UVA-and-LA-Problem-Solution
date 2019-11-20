/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define case(res) printf("Case %d: %d\n", i, res)
#define PI acos(-1)
#define lli long long int
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)

using namespace std;
int main(){
    int tc, c_day=10, c_month=9, c_year=2019, b_day, b_month, b_year, days, months, years;

    cin >> tc;
    for(int i=1; i<=tc; i++){
        scanf("%d/%d/%d", &c_day, &c_month, &c_year);
        scanf("%d/%d/%d", &b_day, &b_month, &b_year);

        days=c_day-b_day;
        months=c_month-b_month;
        years=c_year-b_year;

        if(years<0 || ((years==0) && (months<0)) || (years==0) && (months==0) && (days<0)){
            printf("Case #%d: Invalid birth date\n", i);
            continue;
        }
        else if(days==0 && months==0 && years==0){
            printf("Case #%d: 0\n", i);
            continue;
        }
        else if(months<0){
            years--;
        }
        else if(months==0 && days<0){
            years--;
        }


        if(years>130){
            printf("Case #%d: Check birth date\n", i);
        }
        else{
            printf("Case #%d: %d\n", i, years);
        }
    }

    return 0;
}



