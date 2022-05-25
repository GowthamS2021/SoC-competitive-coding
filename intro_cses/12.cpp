#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    map<char,int> m;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        auto a=m.find(c);
        if(a != m.end()){
            a->second += 1;            
        }
        else {
            m.insert(pair<int, int>(c,1));
        }
    }
    bool found_odd=false;
    for (auto i: m){
        if(i.second%2==1&&!found_odd){
            found_odd=true;
            continue;
        }
        if(i.second%2==1&& found_odd){
            cout<<"NO SOLUTION\n";
            return 0;
        }
    }
    if(s.length()%2==0){        
        for(auto i=m.begin();i!=m.end();i++){
            for(int j=0;j<(i->second)/2;j++){
                cout<<i->first;
            }
        }
        for(auto i=m.end();i!=(m.begin());i--){
            for(int j=0;j<(i->second)/2;j++){
                cout<<i->first;
            }
        }
        for(int j=0;j<(m.begin()->second)/2;j++){
                cout<<m.begin()->first;
        }
    }
    else{
        auto odd=m.begin();
        for(auto i=m.begin();i!=m.end();i++){
            for(int j=0;j<(i->second)/2;j++){
                cout<<i->first;
            }
            if(i->second%2==1) odd = i ;
        }
        cout<<odd->first;
        for(auto i=m.end();i!=(m.begin());i--){
            for(int j=0;j<(i->second)/2;j++){
                cout<<i->first;
            }
        }
        for(int j=0;j<(m.begin()->second)/2;j++){
                cout<<m.begin()->first;
        }
    }


}