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

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll INF = 0x3f3f3f3f;
    ll Nmax = 1e6;
    ll n,x,c, dp[Nmax];
    
    cin >> n >> x;
    dp[0]=0;
    rep(i,1,x+1){dp[i]=INF;}
    rep(i,0,n){
        cin >> c;
        rep(j,0,x-c+1){
            if (dp[j] != INF){
                dp[j+c] = min(dp[j+c],dp[j]+1);
            }
        }
    }

    if (dp[x] != INF ) {
        cout << dp[x];
    }
    else cout << -1;
}