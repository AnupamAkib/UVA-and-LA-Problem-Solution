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

    map<char, char> key;
    key['1'] = '`'; key['W'] = 'Q'; key['S'] = 'A'; key['X'] = 'Z';
    key['2'] = '1'; key['E'] = 'W'; key['D'] = 'S'; key['C'] = 'X';
    key['3'] = '2'; key['R'] = 'E'; key['F'] = 'D'; key['V'] = 'C';
    key['4'] = '3'; key['T'] = 'R'; key['G'] = 'F'; key['B'] = 'V';
    key['5'] = '4'; key['Y'] = 'T'; key['H'] = 'G'; key['N'] = 'B';
    key['6'] = '5'; key['U'] = 'Y'; key['J'] = 'H'; key['M'] = 'N';
    key['7'] = '6'; key['I'] = 'U'; key['K'] = 'J'; key['/'] = '.';
    key['8'] = '7'; key['O'] = 'I'; key['L'] = 'K';
    key['9'] = '8'; key['P'] = 'O'; key[';'] = 'L';
    key['0'] = '9'; key['['] = 'P';key['\''] = ';';
    key['-'] = '0'; key[']'] = '['; key[','] = 'M';
    key['='] = '-'; key['\\'] = ']';key['.'] = ',';


    string s;
    while(getline(cin , s)){
        for(int i=0; i<s.size(); i++){
            if(s[i]!=' '){
                s[i] = key[s[i]];
            }
        }
        print(s);
    }


    return 0;
}

