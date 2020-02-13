/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define ALL(x) x.begin(), x.end()
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, m, id, maxi;
    map<int, int> ar;
    while(1){
        ar.clear();
        cin >> n >> m;
        if(n==0 && m==0) break;
        for(int i=0; i<n; i++){
            cin >> id;
            ar[id]++;
        }
        int beichaDIMU = 0;
        for(int i=0; i<m; i++){
            cin >> id;
            if(ar[id]==1) beichaDIMU++;
        }
        cout << beichaDIMU << endl;
    }
    return 0;
}
