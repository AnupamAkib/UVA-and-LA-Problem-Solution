/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<endl
#define pb(x) push_back(x)
#define cases(x, y) for(int x=1; x<=y; x++)
#define PI acos(-1.0)
#define maxiii(a, b, c) max(max(a, b), c)
#define miniii(a, b, c) min(min(a, b), c)
#define printcase(c, n) cout << "Case #" << c << ": " << n <<endl
#define printcaseii(c, n, m) cout << "Case " << c << ": " << n << " " << m <<endl
#define vprint(vec) cout<<endl;for(int i=0; i<vec.size(); i++) cout << vec[i] << " ";
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
lli input(){lli x; cin >> x; return x;}
void display(int ar[], int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}
void display(vector<int> ar, int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}

int main(){
    FastIO;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    //cin.ignore();
    bool flag=false;
    while(getline(cin , s)){
        for(int i=0; i<s.size(); i++){
            if(s[i]=='"' && !flag){
                s.erase(s.begin()+i);
                s.insert(s.begin()+i, '`');
                s.insert(s.begin()+i, '`');
                flag=true;
                i++;
            }
            else if(s[i]=='"' && flag){
                s.erase(s.begin()+i);
                s.insert(s.begin()+i, '\'');
                s.insert(s.begin()+i, '\'');
                flag=false;
                i++;
            }
        }
        print(s);
    }


    return 0;
}





