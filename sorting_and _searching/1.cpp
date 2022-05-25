// worked
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
    int n;cin >> n;
    vector <ull> v;
    for (int i=0;i<n;i++){
        ull no;cin >> no;
        v.push_back(no);
    }
    sort(v.begin(),v.end());
    int ans=1;
    for (int i=1;i<v.size();i++){
        if ( v[i] != v[i-1] ) ans++;
    }
    cout<<ans;
   
}