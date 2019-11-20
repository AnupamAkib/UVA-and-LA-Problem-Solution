#include<bits/stdc++.h>
using namespace std;
int main(){
    int e, x;
    int cnt=0, r;
    while(scanf("%d", &e)!=EOF){
        x=e;
        while(1){
            cnt+=(e/3);
            r=(e/3)+(e%3);
            if(r<3){
                if(r==2){cnt++;}
                break;
            }
            e=r;
        }
        cout << cnt+x << endl;
        cnt=0;
    }

    return 0;
}
