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

ll calc(ll *a, ll n,ll k) {
    ll h_c=0;
    for (int i=0;i<n-1;i++){
        if (a[i] > k) h_c += k;
        else h_c += a[i];
    }
    h_c += k;
    return h_c;
}

void solve() {
    ll n,h;
    cin >> n>> h;
    ll a[n];
    rep(i,0,n){
        ull x;
        cin >> x;
        a[i] = x;
    }
    ll k;
    ll interval[n-1];
    rep(i,0,n-1){
        interval[i] = a[i+1] - a[i];
    }
    sort (&interval[0],&interval[n-1]);
    ll i = n-2;
    ll m = calc(interval,n,interval[i]);
    while (h < m ) {
        if (i < 0) break;
        m = calc(interval,n,interval[i]);
        i--;
    }
    if (i == n-2 && h > m){
        k = interval[n-2]+h-m;
    }
    else if (i==-1 && h < m){
        ll m_1 = calc(interval,n,0);
        ll mid = (interval[0])/2;
        ll m_2 = calc(interval,n,mid);
        //cout << m_1 << endl;
        //cout << mid << endl;
        //cout << m_2 << endl;
        while (fabs(m_2 - h) > 1 ){
            //cout <<"yes"<<endl;
            if( h> m_2){
                mid = (mid + interval[0]) / 2;
                m_2 = calc(interval,n,mid); 
            }
            else{
                mid = (mid ) / 2;
                m_2 = calc(interval,n,mid); 
            }
        }
        k = mid;
    }
    else if (n == 2){
        k= interval[n-2];
        if ( h > m){
            k = interval[n-2] +h-m;
        }
        else {
            ll mid = interval[n-2]/2;
            ll m_2 = calc(interval,n,mid); 
            //cout << m_2<<endl;
            while ((m_2-h) > 1){
                if (h > m_2){
                    mid = (mid+interval[n-2])/2;
                    m_2 = calc(interval,n,mid);
                    //cout << mid<< endl;
                }
                else{
                    mid = mid/ 2;
                    m_2 = calc(interval,n,mid);
                    //cout << mid<< endl;
                }
            }
            k = mid;
        }
    }
    else{
        ll m_1 = calc(interval,n,interval[i+2]);
        ll mid = (interval[i+1]+interval[i+2] )/2;
        ll m_2 = calc(interval,n,mid);
        //cout << m_1 << endl;
        //cout << mid << endl;
        //cout << m_2 << endl;
        while ((m_2 - h) > 1 ){
            //cout <<"yes"<<endl;
            if( h> m_2){
                mid = (mid + interval[i+2]) / 2;
                m_2 = calc(interval,n,mid); 
            }
            else{
                mid = (mid + interval[i+1]) / 2;
                m_2 = calc(interval,n,mid); 
            }
        }
        k = mid;
    }
    cout << k << endl;
}



int main() {

    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}
/*4
2 5
1 5
3 10
2 4 10
5 3
1 2 4 5 7
4 1000
3 25 64 1337*/
