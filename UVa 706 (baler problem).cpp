#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<x<<endl;

long long s, n;
bool f[10][10] = {0};
string t;

void horizontal(int x){
    for(int i=0; i<t.size(); i++){
        if(f[t[i]-'0'][x]){
            cout << " ";
            for(int i=0; i<s; i++){
                cout << "-";
            }
            cout << " ";
        }
        else{
            for(int i=0; i<s+2; i++){
                cout << " ";
            }
        }
        if(i!=t.size()-1) cout << " ";
        if(i==t.size()-1) cout << endl;
    }
}

void vertical(int l, int r){
    for(int k=0; k<s; k++){
        for(int i=0; i<t.size(); i++){
            if(f[t[i]-'0'][l]){
                cout << "|";
            }
            else{
                cout << " ";
            }
            for(int ii=0; ii<s; ii++){
                cout << " ";
            }
            if(f[t[i]-'0'][r]){
                cout << "|";
            }
            else{
                cout << " ";
            }
            if(i!=t.size()-1) cout << " ";
            if(i==t.size()-1) cout << endl;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    f[0][1] = true;
    f[0][2] = true;
    f[0][3] = true;
    f[0][4] = true;
    f[0][5] = true;
    f[0][6] = true;

    f[1][2] = true;
    f[1][3] = true;

    f[2][1] = true;
    f[2][2] = true;
    f[2][7] = true;
    f[2][5] = true;
    f[2][4] = true;

    f[3][1] = true;
    f[3][2] = true;
    f[3][7] = true;
    f[3][3] = true;
    f[3][4] = true;

    f[4][6] = true;
    f[4][7] = true;
    f[4][2] = true;
    f[4][3] = true;

    f[5][1] = true;
    f[5][6] = true;
    f[5][7] = true;
    f[5][3] = true;
    f[5][4] = true;

    f[6][1] = true;
    f[6][6] = true;
    f[6][5] = true;
    f[6][4] = true;
    f[6][3] = true;
    f[6][7] = true;

    f[7][1] = true;
    f[7][2] = true;
    f[7][3] = true;

    f[8][1] = true;
    f[8][2] = true;
    f[8][3] = true;
    f[8][4] = true;
    f[8][5] = true;
    f[8][6] = true;
    f[8][7] = true;

    f[9][1] = true;
    f[9][2] = true;
    f[9][3] = true;
    f[9][4] = true;
    f[9][6] = true;
    f[9][7] = true;

    
    while(cin >> s >> t and s!=0){
        horizontal(1);
        vertical(6, 2);
        horizontal(7);
        vertical(5, 3);
        horizontal(4);
        cout << endl;
    }
    return 0;
}

/*
      --   --   --   --
   |    | |       | |  |
   |    | |       | |  |
      --   --        -- 
   |    |    |    |    |
   |    |    |    |    |
      --   --        -- 

 ---         ---   ---   --- 
    | |   | |     |   | |   |
    | |   | |     |   | |   |
    | |   | |     |   | |   |
 ---   ---   ---   ---       
|         | |   | |   | |   |
|         | |   | |   | |   |
|         | |   | |   | |   |
 ---         ---   ---   --- 


*/
