/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "yes" << endl
#define no cout << "no" << endl
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<endl
#define pb(x) push_back(x)
#define cases(x, y) for(int x=1; x<=y; x++)
#define PI acos(-1.0)
#define maxiii(a, b, c) max(max(a, b), c)
#define miniii(a, b, c) min(min(a, b), c)
#define printcase(c, n) cout << "Case " << c << ": " << n <<endl
#define printcaseii(c, n, m) cout << "Case " << c << ": " << n << " " << m <<endl
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i] << " ";}cout<<endl
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
lli input(){lli x; cin >> x; return x;}
void display(int ar[], int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}
void display(vector<int> ar, int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}

string playerWon(string a, string b, string c){
    string ans="";
    if(a=="XXX") ans+="X";
    if(b=="XXX") ans+="X";
    if(c=="XXX") ans+="X";

    if(a=="OOO") ans+="O";
    if(b=="OOO") ans+="O";
    if(c=="OOO") ans+="O";

    if(a[0]==b[0] && b[0]==c[0] && a[0]=='X') ans+="X";
    if(a[0]==b[0] && b[0]==c[0] && a[0]=='O') ans+="O";

    if(a[1]==b[1] && b[1]==c[1] && a[1]=='X') ans+="X";
    if(a[1]==b[1] && b[1]==c[1] && a[1]=='O') ans+="O";

    if(a[2]==b[2] && b[2]==c[2] && a[2]=='X') ans+="X";
    if(a[2]==b[2] && b[2]==c[2] && a[2]=='O') ans+="O";

    if(a[0]==b[1] && b[1]==c[2] && a[0]=='X') ans+="X";
    if(a[0]==b[1] && b[1]==c[2] && a[0]=='O') ans+="O";

    if(a[2]==b[1] && b[1]==c[0] && c[0]=='X') ans+="X";
    if(a[2]==b[1] && b[1]==c[0] && c[0]=='O') ans+="O";
    return ans;
}

string colCheck(string a, string b, string c){
    if(a[0]==b[0] && b[0]==c[0] && a[0]=='X') return "X";
    if(a[1]==b[1] && b[1]==c[1] && a[1]=='X') return "X";
    if(a[2]==b[2] && b[2]==c[2] && a[2]=='X') return "X";

    if(a[0]==b[1] && b[1]==c[2] && a[0]=='X') return "X";
    if(a[2]==b[1] && b[1]==c[0] && a[2]=='X') return "X";
    return "nai";
}

void solve(int tc){
    string a, b, c;
    int xCnt=0, oCnt=0;
    cin >> a >> b >> c;
    /*if(tc==-1){
        print(a);
        print(b);
        print(c);
    }*/
    for(int i=0; i<3; i++){
        if(a[i]=='X') xCnt++;
        if(a[i]=='O') oCnt++;
        if(b[i]=='X') xCnt++;
        if(b[i]=='O') oCnt++;
        if(c[i]=='X') xCnt++;
        if(c[i]=='O') oCnt++;
    }
    //cout << playerWon(a, b, c) << endl;
    if(oCnt>xCnt || xCnt-oCnt > 1){
        no;
    }
    else{
        if(xCnt>oCnt && playerWon(a, b, c)=="X"){
            yes;
        }
        else if(xCnt>oCnt && playerWon(a, b, c)=="O"){
            no;
        }
        else if(xCnt==oCnt && playerWon(a, b, c)=="O"){
            yes;
        }
        else if(xCnt==oCnt && playerWon(a, b, c)=="X"){
            no;
        }
        else if(xCnt>oCnt && playerWon(a, b, c)=="XX" && (a=="XXX" || b=="XXX" || c=="XXX") && colCheck(a, b, c)=="X"){
            yes;
        }
        else if(xCnt>oCnt && playerWon(a, b, c)=="XX" && ((a[0]==b[0] && b[0]==c[0] && a[0]=='X') || (a[1]==b[1] && b[1]==c[1] && a[1]=='X') || (a[2]==b[2] && b[2]==c[2] && a[2]=='X')) && colCheck(a, b, c)=="X"){
            yes;
        }
        else if(a[0]==a[2] && b[1]=='X' && c[0]==c[2] && a[0]=='X' && c[0]=='X'){
            yes;
        }
        else if(playerWon(a, b, c) == "X" || playerWon(a, b, c) == "O"){
            yes;
        }
        else if(playerWon(a, b, c) == ""){
            yes;
        }
        else no;
    }
}

int main(){
    FastIO;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int tc = 1;
    cin >> tc;
    for(int i=1; i<=tc; i++){
        solve(i);
    }

    return 0;
}




