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
    ull app,apa;ll diff;cin >> app >> apa >> diff;
    ll ds[app] ;
    ll as[apa] ;
    for (size_t i=0;i< app ;i++){
        int no;cin >> no;
        ds[i]=no;
    }
    for (size_t i=0;i< apa ;i++){
        int no;cin >> no;
        as[i]=no;
    }
    sort(as,as+apa);
    sort(ds,ds+app);
    ull allocated=0;
    vector<int>v;
    
    int i=0,j=0;
    while (i<app && j<apa){
        if (j<apa &&  as[j]-ds[i] < -diff ) {j++;}
        if (j<apa && as[j]-ds[i] >= -diff  && as[j]-ds[i] <= diff ){
            allocated ++;
            j++;
            i++;
        }
        if (j<apa && as[j] - ds[i] > diff ) {i++;}        
    }
    cout<<allocated;
}