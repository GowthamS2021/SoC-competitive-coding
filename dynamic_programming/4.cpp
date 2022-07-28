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
    ll n,x,c,mod = 1e9+7;
    ll xmax = 1e6;
    ll dp[xmax+1];
    cin >> n >> x;

    dp[0] = 1;
    rep (i,1,xmax+1) {dp[i] = 0;}
    rep (i,0,n){
        cin >> c;
        rep(j,0,x-c+1){
            dp[j+c] = ( dp[j+c] + dp[j] ) %mod;
        }
    }
    cout << dp[x]; 

}