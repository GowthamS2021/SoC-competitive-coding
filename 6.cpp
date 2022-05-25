#include<iostream>
typedef unsigned long long int u;

using namespace std;
void find(u y, u  x){
    u ans;
    if(y>=x){
        if(y%2==0) ans = y*y - x + 1 ;
        else ans= (y-1)*(y-1)+x;
    }
    else if (x>y){
        if(x%2==1) ans = x*x -y+1;
        else ans= (x-1)*(x-1)+y;
    }
    cout<< ans<<"\n";
}
int main(){
    int t;cin >> t;
    while(t!=0){
        t--;
        int y,x;cin >> y>>x;
        find(y,x);
    }
}
