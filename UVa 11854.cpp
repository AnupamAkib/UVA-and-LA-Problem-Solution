#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    while(1){
        cin >> a >> b >> c;
        if(a==0 && b==0 && c==0){break;}
        if(a==sqrt(b*b+c*c) || b==sqrt(a*a+c*c) || c==sqrt(b*b+a*a)){
            cout << "right" << endl;
        }
        else{
            cout << "wrong" << endl;
        }
    }
    return 0;
}
