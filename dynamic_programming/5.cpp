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
    ll n,nmax=1e6;
    ll INF = 0x3f3f3f3f;
    cin >> n;
    ll dp[nmax+1];
    rep (i,1,nmax+1) {dp[i] = INF;}
    dp[0] = 0;

    rep(i,1,n+1){
        ll a = i;
        while (a>0){
            if(a%10 != 0)
                dp[i] = min(dp[i], dp[i-(a%10)]+1 );
            a /= 10;
        } 
    }

    cout << dp[n];
}