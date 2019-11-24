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
    for(int x=1; ; x++){
        cin >> n >> q;
        if(n==0 && q==0) break;
        int num[n+5], key[q+5];
        for(int i=0; i<n; i++){
            cin >> num[i];
        }
        sort(num, num+n);
        for(int i=0; i<q; i++){
            cin >> key[i];
        }
        int mid, k=0;
        cout << "CASE# " << x << ":\n";
        while(q--){
            bool flag=false;
            /*int low=0, high=n-1;
            while(low<=high){ //bin search
                mid=(low+high)/2;
                if(num[mid]==key[k]){
                    cout << key[k] << " found at " << mid+1 << endl;
                    flag=true;
                    break;
                }
                else if(num[mid]>key[k]){
                    high=mid-1;
                }
                else if(num[mid]<key[k]){
                    low=mid+1;
                }
            }
            if(flag==false){
                cout << key[k] << " not found" << endl;
            }*/
            for(int s=0; s<n; s++){ //lin search
                if(num[s]==key[k]){
                    cout << key[k] << " found at " << s+1 << endl;
                    flag=true; break;
                }
            }
            if(flag==false){
                cout << key[k] << " not found" << endl;
            }
            k++;
        }
    }

    return 0;
}


