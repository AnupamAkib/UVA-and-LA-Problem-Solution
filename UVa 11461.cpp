#include<stdio.h>
main(){
int a, i, x=0, v=0;
int cnt = 0;
int ba[100000];
int ar[100000];
while(1){  
scanf("%d %d", &a, &ba[v]);
for(int i = a; i <= ba[v]; i++){ 
    for(int j = 1; j * j <= i; j++){
      if (j * j == i){
        cnt++;
      }
    }

} 

ar[x]=cnt;
x++;
v++;
cnt=0;
if(a==0){ 
    break;
}
}
for(i=0; i<ba[i]; i++){
        printf("%d\n", ar[i]);
}
}
