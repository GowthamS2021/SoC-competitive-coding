#include<iostream>
using namespace std;
int main(){
    unsigned long long a=0;int n;cin >> n;
    unsigned long long arr[n];cin >> arr[0];
    for(int i=1;i<n;i++){
        cin >> arr[i];
        if(arr[i]<arr[i-1]) {
            a+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<a;
}