#include <bits/stdc++.h>
using namespace std;
// done but time exceeded in test case -4
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

void solve() {
    ull n;
    cin >> n;
    ull arr[n];
    vector<ull> v;
    for (int i=0;i< n;i++){
        ull x;cin >> x;
        arr[i] = x;
    }
    sort(&arr[0],&arr[n]);
    int i;
    for (i=n-1;i > -1;i--){
        if (arr[i] < n+1 ) break;
    }
    for (int j=0;j<=i;j++){
        v.pb(arr[j]);
        ull a = arr[j];
        arr[j]=0;
        while (arr[j+1]== a) {            
            j++;            
        }
    }    
    sort(v.begin(),v.end());
    ull no;
    ull operations =0;
    sort(&arr[0],&arr[n]);
    for (no=1;no <= n;no++){
        if (find (v.begin(),v.end(),no) != v.end() ) continue;
        bool match = false;
        ull i;
        if (v.size() > 0) i=v.size()-1;
        else i=0;
        for (;i<n;i++){           
            if (arr[i] == no ) {
                match = true;
                break;
            }
            else if ( (arr[i]/2.0) > no) {
                operations += 1;
                arr[i] = no ;
                match = true;
                break;         
            } 
        }
        if (!match) break;
    }
    if (no == n+1){
        cout << operations << "\n";
        return;
    }
    else {
        cout << -1 << "\n";
    }

}

void precalc() {

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}