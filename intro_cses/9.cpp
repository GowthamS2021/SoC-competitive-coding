#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;cin >> n;
    unsigned long long int i =1000000007,ans=1;
    for(int j=0;j<n;j++){
        ans = (ans * 2) % i;
    }
    cout<<ans;   
}