/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define case(res) printf("Case %d: %d\n", i, res)
#define PI acos(-1)
#define lli long long int
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)
/*-----------------ANUPAM AKIB-------------------*/

using namespace std;
int main(){
    int day=0;
    bool flag;
    double height_of_well, climb_dist, slide_down, fatigue;
    double initial_height=0.0, distance_climbed, HA_climbing, HA_sliding;

    while(1){
    cin >> height_of_well >> climb_dist >> slide_down >> fatigue;
    if(height_of_well==0){break;}
    distance_climbed=climb_dist;
    double f=distance_climbed*(fatigue/100.00);

    for(int i=1; ; ){
        HA_climbing=initial_height+distance_climbed;
        HA_sliding=HA_climbing-slide_down;
        day++;
        //printf("Day=%d, Initial height=%lf, distance climbed=%lf, HA climbing= %lf, HA sliding= %lf\n", day, initial_height, distance_climbed, HA_climbing, HA_sliding);

        if(HA_climbing>height_of_well){
            flag=true;
            break;
        }
        if(HA_sliding<0.0){
            flag=false;
            break;
        }
        initial_height=HA_sliding;
        distance_climbed=distance_climbed-f;
        if(distance_climbed<0.0){distance_climbed=0.0;}
    }
    if(flag==true){
        cout << "success on day " << day << endl;
    }
    else{
        cout << "failure on day " << day << endl;
    }
    day=0;
    initial_height=0.0;
    }

    return 0;
}
