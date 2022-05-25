#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i,v;cin >> n;v=n;
    //priority_queue<int>//
    priority_queue<int> pq; 
    while (n != 1){
        cin >> i;pq.push(i);n--;
    }
    while(true){
        if (v != pq.top() ||  pq.empty() ) {
            cout<<v;
            break;
        }
        pq.pop();
        v--;         
    }
}