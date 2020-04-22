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
#define nl cout<<endl
#define printcase(c, n) cout << "Case " << c << ": " << n <<endl
#define printcaseii(c, n, m) cout << "Case " << c << ": " << n << " " << m <<endl
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i] << " ";}cout<<endl
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
lli input(){lli x; cin >> x; return x;}
void display(int ar[], int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}
void display(vector<int> ar, int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}

lli hour, minute, second, speed;
void split(string s){
    int tmp=0, r=1;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' and s[i]<='9'){
            tmp*=10;
            tmp += (s[i]-'0');
            if(i==1){hour = tmp; r=1; tmp=0;}
            if(i==4){minute = tmp; r=1; tmp=0;}
            if(i==7){second = tmp; r=1; tmp=0;}
            if(i==s.size()-1 && i>7){speed = tmp; r=1; tmp=0;}
        }
    }
}

lli prevTimeInSecond, nowTimeInSecond, prevSpeed;
double dist = 0.0;
void solve(string s){
    split(s);

    nowTimeInSecond = (hour*3600) + (minute*60) + second;
    if(prevSpeed != speed){
        dist += ((nowTimeInSecond - prevTimeInSecond)*prevSpeed)/3600.00;
    }
    else{
        dist += ((nowTimeInSecond - prevTimeInSecond)*speed)/3600.00;
    }

    if(s.size()==8){
        cout << s << " " << fixed << setprecision(2) << dist << " km" << endl;
    }

    prevTimeInSecond = nowTimeInSecond;
    prevSpeed = speed;
}

int main(){
    FastIO;

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    /*int tc = 1;
    cin >> tc;
    for(int i=1; i<=tc; i++){
        solve(i);
    }*/
    string s;
    while(getline(cin, s)){
        solve(s);
    }
    return 0;
}
