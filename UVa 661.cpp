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

void solve(int n, int m, int fuse, int tc){
    int a, maxi = 0, volt = 0;
    vector<pair<int, bool> > electric; electric.clear();
    electric.push_back({0, false});
    while(n--){
        cin >> a;
        electric.push_back({a, false});
    }
    bool flag = true;
    while(m--){
        cin >> a;
        if(!electric[a].second){
            volt += electric[a].first;
            electric[a].second = true;
        }
        else if(electric[a].second){
            volt -= electric[a].first;
            electric[a].second = false;
        }
        maxi = max(maxi, volt);
        if(volt > fuse) flag = false;
    }

    print("Sequence "<<tc);
    if(!flag){
        print("Fuse was blown.");
    }
    else{
        print("Fuse was not blown.");
        print("Maximal power consumption was " << maxi <<" amperes.");
    }
    cout << endl;
}

int main(){
    FastIO;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, m, fuse;
    for(int i=1; ; i++){
        cin >> n >> m >> fuse;
        if(n+m+fuse==0) break;
        solve(n, m, fuse, i);
    }

    return 0;
}




