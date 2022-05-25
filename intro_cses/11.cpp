#include<iostream>
#include<cmath>
using namespace std;
int main(){
    unsigned long long int t,n1,n2;cin >> t;
    while(t!=0){
        cin >> n1 >>n2;
        if (n1*n1+n2*n2 == 0 ) cout<<"YES\n";
        else if ( (n1+n2) % 3==0 && !(n1==0 || n2 ==0) && max(n1,n2) <= 2*min(n1,n2) ) cout<<"YES\n";
        else cout<<"NO\n";
        t--;
    }
}