#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, tc, cnt=0;
    double sum=0, ave, res, a;
    cin >> tc;
    while(tc--){
        cin >> n;
        int marks[n];
        for(int i=0; i<n; i++){
            cin >> marks[i];
            sum+=marks[i];
        }
        ave=sum/n;
        //cout << n << endl;
        for(int i=0; i<n; i++){
            if(marks[i]>ave) cnt++;
        }
        a=n;
        res=(cnt/a)*100;
        cout << fixed << setprecision(3) << res << "%" << endl;
        sum=0; cnt=0;
    }
    return 0;
}
