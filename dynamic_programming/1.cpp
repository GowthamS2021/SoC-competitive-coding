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
    ll Nmax = 1e6;
    ll Mod = 1e9+7;

    ll N,dp[Nmax+1];
    rep(i,0,Nmax+1){dp[i]=0;}
    cin >> N;
    dp[0]=1;
    for (int i=1;i<=N;i++){
        for (int j=1;j<=6 && i-j>= 0;j++){
            dp[i] = (dp[i]+dp[i-j])%Mod;
        }
    }
    cout << dp[N];
}