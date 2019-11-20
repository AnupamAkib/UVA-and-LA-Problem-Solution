#include<stdio.h>
int main(){
    int a, b, n, res=0;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
    scanf("%d %d", &a, &b);
    for(int j=a; j<=b; j++){
        if(j%2!=0){
            res=j+res;
        }
    }
    ar[i]=res;
    res=0;
    }
    for(int i=0; i<n; i++){
       printf("Case %d: %d\n", i+1, ar[i]);
    }
return 0;
}
