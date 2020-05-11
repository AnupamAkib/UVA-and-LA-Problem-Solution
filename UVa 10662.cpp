/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<endl;
#define cases(x, y) for(int x=1; x<=y; x++)
#define PI acos(-1.0)
#define maxiii(a, b, c) max(max(a, b), c)
#define miniii(a, b, c) min(min(a, b), c)
#define nl cout<<"\n"
#define point(x) fixed<<setprecision(x)
#define printcase(c, n) cout << "Case " << c << ": " << n <<endl
#define printcaseii(c, n, m) cout << "Case " << c << ": " << n << " " << m <<endl
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i] << " ";} cout<<endl
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
using namespace std;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}

//void solve(int tc){
void solve(int T, int R, int H){
    int travel[T+1][R+3], rastaurant[R+1][H+3], hotel[H+1][T+3];
    for(int i=0; i<T; i++){
        for(int j=0; j<R+1; j++){
            cin >> travel[i][j];
        }
    }
    for(int i=0; i<R; i++){
        for(int j=0; j<H+1; j++){
            cin >> rastaurant[i][j];
        }
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<T+1; j++){
            cin >> hotel[i][j];
        }
    }

    int cost = INT_MAX, Ti, Ri, Hi;
    bool flag = false;
    for(int i=0; i<T; i++){
        for(int j=1; j<R+1; j++){
            if(travel[i][j]==0){
                int tra_ind = i;
                int res_ind = j-1;
                for(int k=1; k<H+1; k++){
                    if(rastaurant[res_ind][k]==0){
                        int hot_ind = k-1;
                        for(int z=1; z<T+1; z++){
                            if(hotel[hot_ind][z]==0 && z-1==tra_ind){
                                flag = true;
                                int total=travel[i][0]+rastaurant[res_ind][0]+hotel[hot_ind][0];
                                if(total<cost){
                                    cost = total;
                                    Ti = tra_ind;
                                    Ri = res_ind;
                                    Hi = hot_ind;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(flag){
        cout << Ti << " " << Ri << " " << Hi << ":" << cost << endl;
    }
    else{
        print("Don't get married!");
    }
}

int main(){
    FastIO;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        //OUTPUT;
    #endif

    /*int tc = 1;
    //cin >> tc; //TEST CASE
    for(int i=1; i<=tc; i++){
        solve(i);
    }*/
    int T, R, H;
    while(cin>>T>>R>>H){
        solve(T, R, H);
    }

    #ifndef ONLINE_JUDGE
        //printf("\n**Time -> %.5fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
        nl;nl; print(point(5) << "**Time -> " << (double)(clock()-tStart) / CLOCKS_PER_SEC << "fs");
    #endif
    return 0;
}

