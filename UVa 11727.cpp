#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3], tc, x, tmp;
    cin >> tc;
    for(int i=1; i<=tc; i++){
        cin >> a[0] >> a[1] >> a[2];
        cout << "Case " << i << ": ";
        for(int i=0; i<3; i++){
            for(int j=i+1; j<3; j++){
                if(a[i]<a[j]){
                    tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        cout << a[1] << endl;
    }
    return 0;
}
