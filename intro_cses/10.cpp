#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;cin >> n;
    int i=5,ans=0;
    while (n>=i){
        ans += n / i;
        i *= 5;
    }
    cout<<ans;
}