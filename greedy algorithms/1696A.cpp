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

void solve(){
    ll n ,z;
    cin >> n >> z;
    ll a [n],b[n];
    rep(i,0,n){
        cin >> a[i];
        b[i] = a[i] | z;
    }
    sort (a,&a[n]);
    sort (b,&b[n]);
    if (b[n-1]>a[n-1]) cout << b[n-1]<<"\n";
    else cout << a[n-1]<<"\n";
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}