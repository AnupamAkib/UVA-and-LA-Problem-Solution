/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#include<string>
#define lli long long int
#define case(ans) printf("Case %d: %d\n", k, ans)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
/*-----------------ANUPAM AKIB-------------------*/

using namespace std;

int main(){
    int a, b, x, y, min_move;
    while(1){
        cin >> a >> b >> x >> y;
        if(a==0 && b==0 && x==0 && y==0){break;}
        int cnt=0;
        bool flag=false;
        if(a==x && b==y){min_move=0; flag=true;}
        else if(a==x || b==y){min_move=1; flag=true;}
        else if(x<a && y<b){
            for(int i=a, j=b; cnt!=10; i--, j--){
                if(i==x && j==y){
                    min_move=1;
                    flag=true;
                    break;
                }
                cnt++;
            }
        }
        else if(x>a && y>b){
            for(int i=a, j=b; cnt!=10; i++, j++){
                if(i==x && j==y){
                    min_move=1;
                    flag=true;
                    break;
                }
                cnt++;
            }
        }
        else if(x<a && y>b){
            for(int i=a, j=b; cnt!=10; i--, j++){
                if(i==x && j==y){
                    min_move=1;
                    flag=true;
                    break;
                }
                cnt++;
            }
        }
        else if(x>a && y<b){
            for(int i=a, j=b; cnt!=10; i++, j--){
                if(i==x && j==y){
                    min_move=1;
                    flag=true;
                    break;
                }
                cnt++;
            }
        }
        flag==true? cout << min_move : cout << 2;
        cout << endl;
    }
    return 0;
}


