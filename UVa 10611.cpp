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

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, q;
    cin >> n;
    int a[n+3];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> q;
    int b[q+3];
    for(int i=0; i<q; i++){
        cin >> b[i];
    }
    for(int i=0; i<q; i++){
        int x=-1, y=-1;
        for(int j=0; j<n; j++){
            if(a[j]<b[i]){
                x=a[j];
            }
            if(a[j]>b[i]){
                y=a[j];
                break;
            }
        }
        if(x==-1){
            cout << "X ";
        }
        else{
            cout << x << " ";
        }
        if(y==-1){
            cout << "X" << endl;
        }
        else{
            cout << y << endl;
        }

    }


    return 0;
}


