// defective
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

    ull n,x; cin >> n >> x;
    vector<ull> w;
    for (int i=0;i<n;i++){
        ull no; cin >> no;
        w.push_back(no);
    }
    sort(w.begin(),w.end());
    ull g=0;
    ll front=0,back= w.size()-1;
    while ( front <= back ) {
        if (w[front]+w[back] > x){
            g++;
            back--;
        }
        else if (w[front] + w[back] <= x){
            g++;
            back--;
            front++;
        }
        else if (front == back ){
            g++;
            front++;
            back --;
        }        
    }
    cout<<g;
}
