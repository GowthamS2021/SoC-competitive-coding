#include<bits/stdc++.h>
using namespace std;
void solve(int depth , vector<unsigned long long int>&v){
    if(depth==0){
        v.push_back(0);
        v.push_back(1);
        return;
    }
    solve(depth-1,v);
    int l=v.size();
    for(int i=l-1;i>=0;i--){
        v.push_back( v[i] + round(pow(10,depth)) ) ;
    }

}
int main(){
    int n;cin >> n;    
    vector<unsigned long long int>v;
    solve(n-1,v);
    int a=1;
    for (auto i:v) cout << setfill('0') << setw(n)<<i<<"\n";
}
// 000 001 011 010 110 111 101 100 
// 0 1 3 2 6 7 5 4 