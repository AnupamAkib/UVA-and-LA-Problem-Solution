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
    int bin[500], res[500];
    int num, d, k=0, cnt=0;
    while(1){
        cin >> num;
        if(num==0){break;}
        while(1){
            d=(num%2);
            bin[k]=d;
            num=num/2;
            k++;
            //cout << "vagsesh=" << d << endl;
            //cout << "num=" << num << endl;
            if(num<=0){break;}
        }
        //cout << "k="<<k<<endl;
        for(int i=k-1, j=0; i>=0; i--, j++){
            res[j]=bin[i];
        }
        cout << "The parity of ";
        for(int i=0; i<k; i++){
            cout << res[i];
            if(res[i]==1){cnt++;}
        }
        cout << " is " << cnt << " (mod 2)." << endl;
        k=0; cnt=0;
    }
    return 0;
}
