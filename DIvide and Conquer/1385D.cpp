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

int solve(const string &s, char c) {
	if (s.size() == 1) {
		return s[0] != c;
	}
	int mid = s.size() / 2;
	int left = solve(string(s.begin(), s.begin() + mid), c + 1);
	left += s.size() / 2 - count(s.begin() + mid, s.end(), c);
	int right = solve(string(s.begin() + mid, s.end()), c + 1);
	right += s.size() / 2 - count(s.begin(), s.begin() + mid, c);
	return min(left, right);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		cout << solve(s, 'a') << endl;
	}
	
	return 0;
}