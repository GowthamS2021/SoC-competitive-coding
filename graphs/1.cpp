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

bool r[1000][1000];
int n, m,cnt=0;
char c;
int h[4]={1,-1,0,0} ,v[4] ={0,0,1,-1};

void dfs(int x, int y) {
    r[x][y] = true;
    rep(i,0,4){
        int dx = x+h[i],dy = y+v[i];
        if (dx >= 0 && dx < n && dy >= 0 && dy < m && !r[dx][dy]){
            dfs(dx,dy);
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n >> m;
    rep(i,0,n){
        rep(j,0,m){
            cin >> c;
            if (c == '#') r[i][j] = true;
            else r[i][j] = false;
        }
    }
    rep(i,0,n){
        rep(j,0,m){
            if (!r[i][j]){                
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout << cnt;
}