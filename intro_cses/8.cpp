#include<iostream>
using namespace std;
int main(){
    int n;cin >> n;
    if (n%4 == 0 || (n+1)%4==0 ) cout<<"YES\n" ;
    else {cout<<"NO\n";return 0;}
    if (n%2 == 0){
        int i=n/2,sum=n+1;cout<<i<<"\n";
        for(int q=1;q<=i/2;q++){
            cout<<q<<" "<<sum-q<<" ";
        }
        cout<<"\n"<<i<<"\n";
        for(int q=i/2+1;q<=i;q++){
            cout<<q<<" "<<sum-q<<" ";
        }
    }
    else {
        int i=(n+1)/4,sum=n;cout<<2*i-1<<"\n";
        cout<< sum<<" ";
        for(int q=1;q<i;q++){
            cout<<q<<" "<<sum-q<<" ";
        }
        cout<<"\n"<<2*i<<"\n";
        for(int q=i;q<2*i;q++){
            cout<<q<<" "<<sum-q<<" ";
        }
    }
}