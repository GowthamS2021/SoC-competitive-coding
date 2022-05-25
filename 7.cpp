#include<iostream>
using namespace std;
void solve(unsigned long long int  i){
    unsigned long long int ans = ( (i*i)*( (i*i)-1 ) )/2 - 4*(i-2)*(i-1) ;
    cout<<ans<<"\n";
}

int main(){
    int n,i=1;cin>>n;
    while(i <= n){
        solve(i);
        i++;
    }
}