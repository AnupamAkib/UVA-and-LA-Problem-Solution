#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, b, k;
    int cnt=0;
    while(1){
        cin >> a >> b;
        if(a==0 && b==0){break;};
        for(int i=a; i<=b; i++){
            k=sqrt(i)-(int)sqrt(i);
            if(k==0){
                cnt++;
            }
        }
        cout << cnt << endl;
        cnt=0;
    }
    return 0;
}

