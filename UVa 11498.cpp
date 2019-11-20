#include<bits/stdc++.h>
#define scan(a, b) scanf("%d %d", &a, &b)
using namespace std;
int main(){
    int x, y, a, b, tc;
    while(1){
        cin >> tc;
        if(tc==0){break;}
        cin >> x >> y;
        while(tc--){
            scan(a, b);
            if(a==x || b==y){
                cout << "divisa" << endl;
            }
            else if(a>x && b>y){
                cout << "NE" << endl;
            }
            else if(a<x && b<y){
                cout << "SO" << endl;
            }
            else if(a>x && b<y){
                cout << "SE" << endl;
            }
            else if(a<x && b>y){
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}


