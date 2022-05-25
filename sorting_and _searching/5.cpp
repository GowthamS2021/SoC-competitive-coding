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
    multimap<int,bool> period;//0-start 1-end
    int i,total=2*n;
    for (i=0 ; i < total;i++){
        if (i%2 == 0){
            int no;cin >>no;
            period.insert(pair<int,bool>(no,0));
        }
        else{
            int no;cin >>no;
            period.insert(pair<int,bool>(no,1));
        } 
    }
    int no=0;
    set<int,greater<int> > s;
    for (auto i:period){
        s.insert(no);
        if (i.second == 0) no++;
        else no--;
    }
    cout<< *(s.begin());




}