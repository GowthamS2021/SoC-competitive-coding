#include<iostream>
#include<queue>
#include<string>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    priority_queue<int> pq ;
    int n=0,i=1;
    while(n!=s.length()){
        while (s[n] == s[n+1]) {
            i++;n++;
        }
        pq.push(i);
        i=1;
        n++; 
    }
    cout<<pq.top();
}