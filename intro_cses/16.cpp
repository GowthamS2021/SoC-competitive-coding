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

ll solve(ll sum,ll total,ll n ,vector<ll> v){
    if (n==0) return abs (total-2*sum);
    else return min(solve(sum,total,n-1,v),solve( sum + v[n-1],total,n-1,v));    
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll n;cin >> n;
    vector<ll> v;ll total=0;
    for (int i=0;i<n;i++){
        ll no ; cin >> no;
        total += no;
        v.push_back(no);
    }
    sort(v.begin(),v.end());
    ll sum=0;
    cout<<solve(sum,total,n,v);
} 