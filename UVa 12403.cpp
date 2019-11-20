#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, total=0, dnt, x=0;
    char ope[20];
    char m[10];
    scanf("%d ", &t);
    for(int k=1; k<=t; k++){
        gets(ope);
        if(ope[0]=='r'){
            cout << total << endl;
        }
        else{
            for(int i=0; i<strlen(ope); i++){
                if(ope[i]==' ' && ope[0]=='d'){
                    for(int j=i+1; j<strlen(ope); j++){
                        m[x]=ope[j];
                        x++;
                    }
                    m[x]='\0';
                    dnt=atoi(m);
                    total+=dnt;
                   // cout << dnt << endl;
                    break;
                }
            }
        }
    x=0;
    }
    return 0;
}

