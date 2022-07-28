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

vector<pii> ans;

ll N, M, a, b, ds[100001];

ll find(ll u){
    if(ds[u] < 0)   return u;
    ds[u] = find(ds[u]);
    return ds[u];
}

bool merge(int u, int v){
    u = find(u); v = find(v);
    if(u == v)  return false;
    if(ds[u] < ds[v])   swap(u, v);
    ds[v] += ds[u];
    ds[u] = v;
    return true;
}

int main(){
    cin >> N >> M;
    for(int i = 1; i <= N; i++) ds[i] = -1;
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        merge(a, b);
    }

    for(int i = 1; i < N; i++)
        if(merge(i, i+1))
            ans.push_back({i, i+1});

    cout << (ll) ans.size()<<"\n";
    for(pii P : ans)
        cout << P.first<<" "<<P.second<<"\n";
}