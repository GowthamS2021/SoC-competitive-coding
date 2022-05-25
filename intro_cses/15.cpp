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

void permute(string &s,set<string> &v,int start){
    if (s.length()-start == 2){
        v.insert(s);
        char s1=s[start];
        s[start]=s[start+1];
        s[start+1]=s1;
        v.insert(s);
        s1 = s[start];
        s[start]=s[start+1];
        s[start+1]=s1;
        return;
    }
    for (int i=0;i<s.length();i++){
        char s2 = s[i];
        s[i]=s[start];
        s[start]=s2;
        permute(s,v,start+1);
        s2=s[i];
        s[i]=s[start];
        s[start]=s2;
    }
}

void solve(string &s){
    if (s.length()==1) {
        cout<<1<<"\n";
        cout<<s;
        return;
    }
    set<string > v;
    permute(s,v,0);
    cout<<v.size()<<"\n";
    for (auto i: v) cout<<i<<"\n";
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(0);
    string s;cin >> s;
    solve(s);

}