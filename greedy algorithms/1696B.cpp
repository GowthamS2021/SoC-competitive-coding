#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for (int i=a; i<b; i++)

typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int,int> pii;
typedef map<int,int> mii;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int*a=new int[n];
        int ans=0;
        int k=0;        
        for(int j=0;j<n;j++)cin>>a[j];  
        for(int j=0;j<n;j++){
            if(a[j]!=0){
                ans=1;
                break;
            }
        }
        if(ans==0){
            cout<<0<<endl;
        }
        else{
            ans=0;
            for(int j=0;j<n-1;j++){
                if(a[j]!=0&&a[j+1]==0){
                    ans++;
                }
            }
            if(ans==0) cout<<1<<endl;
            else if(ans==1&&a[n-1]==0)cout<<1<<endl;
            else cout<<2<<endl;
        } 
    }
}
