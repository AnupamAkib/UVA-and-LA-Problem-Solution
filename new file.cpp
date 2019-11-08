/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#include<string>
#define lli long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define check cout << "\tOK" << endl
#define PI acos(-1.0)
#define ALL(x) x.begin(), x.end()
#define rev(x) reverse(x.begin(), x.end())
/*-----------------ANUPAM AKIB-------------------*/

using namespace std;

int main(){
    int n, tc, ans;
    cin >> tc;
    while(tc--){
        cin >> n;
        ans=n;
        int ar[n+5];
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        sort(ar, ar+n, greater<int>());
        for(int i=1; i<=n; i++){
            if(ar[i-1]==i){
                ans=i; break;
            }
            if(ar[i-1]<i){
                ans=i-1; break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
































