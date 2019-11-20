/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define case(res) printf("Case %d: %d\n", i, res)
#define PI acos(-1)
#define lli long long int
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)
/*-----------------ANUPAM AKIB-------------------*/

using namespace std;
int main(){
    char sent[1000], s[1000], rev[1000];
    int k=0;
    //string s;

    while(1){
        gets(sent);
        if(strcmp(sent, "DONE")==0){break;}
        for(int i=0; i<strlen(sent); i++){
            if(sent[i]==' ' || sent[i]=='.' || sent[i]==',' || sent[i]=='!' || sent[i]=='?'){
                continue;
            }
            s[k]=sent[i]; k++;
        }
        s[k]='\0';
        //strlwr(s);
        for(int i=0; i<k; i++){
            if(s[i]>='A' && s[i] <='Z'){
                s[i]=s[i]+32;
            }
        }
        //cout << s << endl;

        for(int i=strlen(s)-1, j=0; i>=0; i--, j++){
            rev[j]=s[i];
        }
        rev[k]='\0';
        //cout << s << endl;
        //cout << rev << endl;
        if(strcmp(s, rev)==0){
            printf("You won't be eaten!\n");
        }
        else{
            cout << "Uh oh.." << endl;
        }
        k=0; rev[0]='\0'; s[0]='\0';
    }
    return 0;
}
