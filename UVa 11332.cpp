#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, s=0;
    while(1){
        scanf("%lld", &n);
        if(n==0){break;}
        for(int i=1; ; i++){
            s+=(n%10);
            n=n/10;
            if(n==0){
                if(s<10){break;}
                else{
                    n=s;
                    s=0;
                }
            }
        }

        cout << s << endl;
        s=0;
    }
    return 0;
}
