#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    char s[25];
    int sum=0;

    while(scanf("%s", s)!=EOF){
        for(int i=0; i<strlen(s); i++){
            if(s[i]>='a' && s[i]<='z'){
                sum+=(s[i]-96);
            }
            if(s[i]>='A' && s[i]<='Z'){
                sum+=(s[i]-38);
            }
        }
        if(prime(sum)==1){
            cout << "It is a prime word." << endl;
        }
        else{
            cout << "It is not a prime word." << endl;
        }
        sum=0;
    }
    return 0;
}
