/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#include<string>
#define lli long long int
#define case(ans) printf("Case %d: %d\n", k, ans)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define check cout << "\tOK" << endl
#define PI acos(-1.0)
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)
#define ALL(x) x.begin(), x.end()
#define rev(x) reverse(x.begin(), x.end())
#define pb(x) push_back(x)
#define ppb pop_back()
#define pf(x) push_front(x)
#define ppf pop_front()
#define mii map<int, int>
#define mci map<char, int>
#define mib map<int, bool>
#define dqi deque<int>
#define maxiii(a, b, c) max(max(a, b), c)
#define miniii(a, b, c) min(min(a, b), c)
#define vec vector<int>
#define pr pair<int, int>
#define NUM 1000000
//int *ar=(int *) malloc(n*sizeof(int)); dynamic memory allocation (array)
/*-----------------ANUPAM AKIB-------------------*/

using namespace std;

string sum(string a, string b){
    string ans;
    int len_a=a.size();
    int len_b=b.size();
    if(len_a<len_b){
        for(int i=1; i<=abs(len_a-len_b); i++){
            a.insert(a.begin(), '0');
        }
    }
    else if(len_a>len_b){
        for(int i=1; i<=abs(len_a-len_b); i++){
            b.insert(b.begin(), '0');
        }
    }
    int carry=0, tmp;
    for(int i=a.size()-1; i>=0; i--){
        tmp=(a[i]-48 + b[i]-48) + carry;
        if(tmp>=10){
            carry = 1;
            ans.insert(ans.begin(), (tmp%10)+48);
        }
        else{
            carry = 0;
            ans.insert(ans.begin(), tmp+48);
        }
    }
    if(carry!=0){
        ans.insert(ans.begin(), carry+48);
    }
    while(ans[0]=='0'){
        ans.erase(ans.begin());
    }
    return ans;
}

string multiple(string a, string b){
    string x, ans="00";
    //ans.clear();
    int len_a=a.size();
    int len_b=b.size();
    int carry=0, tmp;

    if(len_a>len_b){
        for(int i=len_b-1, k=0; i>=0; i--, k++){
            carry=0;
            for(int j=len_a-1; j>=0; j--){
                tmp=(b[i]-48)*(a[j]-48) + carry;
                //cout << b[i] << " " << a[j] << endl;
                if(tmp>=10){
                    carry=tmp/10;
                    tmp=tmp%10;
                    x.insert(x.begin(), tmp+48);
                }
                else{
                    x.insert(x.begin(), tmp+48);
                    carry=0;
                }
            }
            if(carry!=0){
                x.insert(x.begin(), carry+48);
            }
            for(int i=0; i<k; i++){
                x.insert(x.end(), '0');
            }
            //cout << x << endl;
            ans=sum(ans, x);
            x.clear();
        }
    }
    else{
        for(int i=len_a-1, k=0; i>=0; i--, k++){
            carry=0;
            for(int j=len_b-1; j>=0; j--){
                tmp=(a[i]-48)*(b[j]-48) + carry;
                //cout << b[i] << " " << a[j] << endl;
                if(tmp>=10){
                    carry=tmp/10;
                    tmp=tmp%10;
                    x.insert(x.begin(), tmp+48);
                }
                else{
                    x.insert(x.begin(), tmp+48);
                    carry=0;
                }
            }
            if(carry!=0){
                x.insert(x.begin(), carry+48);
            }
            for(int i=0; i<k; i++){
                x.insert(x.end(), '0');
            }
            //cout << x << endl;
            ans=sum(ans, x);
            x.clear();
        }
    }
    return ans;


}


int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string X, Y;
    while(getline(cin, X)){
        getline(cin, Y);
        if((Y.size()==1 && Y[0]=='0') || (X.size()==1 && X[0]=='0')){
            cout << 0 << endl;
        }
        else{
            cout << multiple(X, Y) << endl;
        }
    }
    return 0;
}



