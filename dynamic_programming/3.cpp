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
    ll mod = 1e9 + 7;
    ll Xmax = 1e6;
    ll x,n;
    cin >> n >> x;
    ll c[n],dp[Xmax+1];
    rep (i,0,n){
        cin >> c[i];
    }
    rep(i,0,Xmax+1){dp[i] = 0;}
    dp[0]=1;
    for(int i = 0; i < x; i++)
        if(dp[i] != 0)
            for(int j = 0; j < n; j++)
                if(i+c[j] <= x)
                    dp[i+c[j]] = (dp[i+c[j]] + dp[i]) % mod;
    cout << dp[x];
 
}