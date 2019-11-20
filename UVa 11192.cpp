/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define case(res) printf("Case %d: %d\n", i, res)
#define PI acos(-1)
#define lli long long int
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)

using namespace std;
int main(){
    char str[101];
    string res;
    int g, cnt=1;
    while(1){
        cin >> g;
        if(g==0){break;}
        scanf("%s", str);
        int len=strlen(str)/g;
        char tmp[len], b[len];

        //printf("lenth= %d, group= %d\n", strlen(str), len);

        for(int i=0, j=0; i<strlen(str); i++, j++){
            tmp[j]=str[i];
            if(cnt==len){
                //printf("%s  %d\n", tmp, strlen(tmp));
                for(int t=(len)-1, z=0; t>=0; t--, z++){
                    b[z]=tmp[t];
                }
                //printf("%s\n", b);
                b[len]='\0';
                res+=b;

                j=-1; cnt=1;
                tmp[0]='\0'; b[0]='\0';
                continue;
            }
            cnt++;
        }
        cout << res << endl;
        res.clear();
    }
    return 0;
}




