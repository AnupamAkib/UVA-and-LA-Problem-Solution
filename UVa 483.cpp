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

    string s, t;
    while(getline(cin , s)){
        for(int i=0; i<s.size(); i++){
            if(s[i] == ' ' or i==s.size()-1){
                t.clear(); int k = i-1;
                if(i==s.size()-1) k = i;
                while(1){
                    if(s[k] == ' ' or k < 0) break;
                    t += s[k];
                    k--;
                }
                cout << t;
                if(i!=s.size()-1) cout << ' ';
            }
        }
        cout << endl;
    }


    return 0;
}



