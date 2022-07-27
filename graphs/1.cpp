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

vector <vector<bool> > p;
vector <pair<int,int> >space;
vector <vector<pii> > room;

bool precalc(int i, int j,vector<pii> s) {
    for (auto x : s){
        if (x.F == i && x.S == j) return true;
    }
    return false;
}

bool precalc(int i, int j){
    for (int x=0;x<room.size();x++){
        for (int y=0;y<room[x].size();y++){
            if (room[x][y].F == i && room[x][y].S == j ) return true;
        }
    }
    return false;
}


void check(int i,int j,vector <pii> &set) {
    if (i<0 || i>6 || j<0 || j>6) return;
    if (p[i][j] == false && precalc(i,j,set) == false && precalc(i,j) == false){ 
        set.push_back(pair<int,int> (i,j));  
        //cout << set[set.size()-1].F << "and" << set[set.size()-1].S << endl;  
        //cout<<"yeah"<< endl;   
        check(i+1,j,set);
        check(i-1,j,set);
        check(i,j+1,set);
        check(i,j-1,set);
    }
    else return;
}




int main() {

    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        vector<bool> b;
        string s;
        cin >> s;
        for (int j=0;j<m;j++){
            if (s[j] == '#' ) b.push_back(true);
            else {
                b.push_back(false);
                space.pb(mp(i,j));
            }
        }
        p.push_back(b);
    }
    /*for (auto x : p){
        for (auto y:x){
           cout<< y <<endl ;
        }
        cout << "Yes";
    }
    */
    for (int i=0;i<space.size();i++){
        if (precalc(space[i].F,space[i].S)) continue;
        else{
            vector<pii> set;
            check(space[i].F,space[i].S,set);
            /*for (auto x: set){
                cout << x.F << " and "<<x.S <<endl;
            }*/
            room.push_back(set);
        }
    }
    /*for (auto x : room){
        for (auto y:x){
           cout<< y.F << " and "<< y.S <<endl ;
        }
        cout << "Yes";
    }*/
    cout << room.size()<<"\n";


    // precalc()
    // int t; cin>>t;
    // while(t--) solve();
}
