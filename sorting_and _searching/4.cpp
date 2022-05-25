// worked!!
#include <bits/stdc++.h>
using namespace std;

// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// Usage: rng(), rng.min(), rng.max()

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

multiset<int>pt;
int y;
int main() {

    ios_base::sync_with_stdio(false); cin.tie(0);
    int ticket,customer;
    cin >> ticket >> customer;
    
    for (int i=0;i<ticket;i++){
        cin >> y;
        pt.insert(y);
    }
    for (int i=0;i<customer;i++){
        cin >> y;
        auto x = pt.upper_bound(y);
        if (x == pt.begin()) cout << -1 <<"\n";
        else {
            x-- ;
            cout << *(x)<<"\n";
            pt.erase(x);
        }
    }
    
}