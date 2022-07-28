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

vector<ll> avengers;
ll n,k,a,b;

ll rec(ll l, ll r){
	ll i=lower_bound(avengers.begin(),avengers.end(),l)-avengers.begin();
	ll j=upper_bound(avengers.begin(),avengers.end(),r)-avengers.begin();
	j--;
	ll x=j-i+1;
	ll power_consumed;
	if(x==0)power_consumed=a;
	else{
	    power_consumed=b*x*(r-l+1);
	}
	if(l==r || x==0)
		return power_consumed;
	ll mid=(l+r)/2;
	ll minPower=min(power_consumed, rec(l,mid)+rec(mid+1,r));
	return minPower;
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n >>k >> a >> b;
    ll i;
    for(i=0;i<k;i++)
	{
		int val;
		cin>>val;
		avengers.push_back(val);
	}
	sort(avengers.begin(),avengers.end());
	ll x = (ll)1<<n;
	cout<<rec(1,x)<<endl;
}