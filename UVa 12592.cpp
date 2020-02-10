/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
using namespace std;

int main(){
    map<string, string> slogans;
    string f, s;
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, f);
        getline(cin, s);
        slogans[f] = s;
    }
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, f);
        cout << slogans[f] << endl;
    }
    return 0;
}

