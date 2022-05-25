#include<iostream>
#include<cmath>
using namespace std;

void solve() {
    long long k,x;cin >> k >> x;
    if (x > k*k ) {
        cout<<to_string(2*k-1)<<"\n";
        return;
    }
    if (x < (k*(k+1)/2) ){
        double y = sqrt(1+8*x);
        double n = (y-1)/2;
        cout<<to_string((int)ceil(n))<<"\n";
    }
    if (x >= (k*(k+1)/2) ){
        x = x -(k*(k+1)/2);
        double y = sqrt ( (2*k-1)*(2*k-1) - 8*x );
        double n = (2*k-1-y)/2 ;
        cout<<to_string( (int)ceil(n)+k)<<"\n";
    }    

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}