#include<stdio.h>
main(){
long long int n, i;
scanf("%lld", &n);
long long int numset1[n];
long long int numset2[n];
for(i=0; i<n; i++){
    scanf("%lld", &numset1[i]);
    scanf("%lld", &numset2[i]);
}
for(i=0; i<n; i++){

    if(numset1[i]>numset2[i]){
        printf(">\n");
    }
    else if(numset1[i]<numset2[i]){
        printf("<\n");
    }
    else{
        printf("=\n");
    }
}
}
