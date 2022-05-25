#include<iostream>
#include<cmath>
using namespace std;
void solve(int intial,int stack,int no){
    if (no==2){
        cout<<intial<<" "<<6-stack-intial<<"\n";
        cout<<intial<<" "<<stack<<"\n";
        cout<<6-stack-intial<<" "<<stack<<"\n";
        return;
    }
    if(no==1){
        cout<<intial<<" "<<stack;
        return;
    }
    solve(intial,6-stack-intial,no-1);
    cout<<intial<<" "<<stack<<"\n";
    solve(6-stack-intial,stack,no-1);
}
int main(){
    int n;cin >> n;
    cout<<round(pow(2,n))-1<<"\n";
    solve(1,3,n);
}