#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    char res;
    int tc, match, ban=0, www=0, ab=0, tie=0;
    cin >> tc;
    for(int i=1; i<=tc; i++){
        cin >> match;
        int z=match;
        while(match--){
            cin >> res;
            if(res=='B') ban++;
            if(res=='W') www++;
            if(res=='A') ab++;
            if(res=='T') tie++;
        }
        cout << "Case " << i << ": ";
        if(ban>0 && www==0 && tie==0){
            cout << "BANGLAWASH" << endl;
        }
        else if(ban==0 && www>0 && tie==0){
            cout << "WHITEWASH" << endl;
        }
        else if(ab==z){
            cout << "ABANDONED" << endl;
        }
        else if(ban==www){
            cout << "DRAW " << ban << " " << tie << endl;
        }
        else if(ban>www){
            cout << "BANGLADESH " << ban << " - " << www << endl;
        }
        else if(ban<www){
            cout << "WWW " << www << " - " << ban << endl;
        }
        ban=0; www=0; ab=0; tie=0;
    }

    return 0;
}
