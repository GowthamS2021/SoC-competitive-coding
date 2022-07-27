#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for (int i=a; i<b; i++)

typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int,int> pii;
typedef map<int,int> mii;

vector <string> paths;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    bool table[7][7];
    string s;cin >> s;    
    while (true){
        string p = s;
        pii current(0,0);
        for (int x =0 ;x< 7;x++){
            for (int y=0;y<7;y++){
                table[x][y] = false;
            }
        }
        if (p[i]=='?')
    }
}