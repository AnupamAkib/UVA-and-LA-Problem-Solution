/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
using namespace std;

map<int, int> cnt;
vector<int> num;
int main(){
    int k;
    while(scanf("%d", &k)!=EOF){
        if(cnt[k]==0){
            num.push_back(k);
            cnt[k]++;
        }
        else{
            cnt[k]++;
        }
    }
    for(int i=0; i<num.size(); i++){
        cout << num[i] << " " << cnt[num[i]] << endl;
    }
    return 0;
}




