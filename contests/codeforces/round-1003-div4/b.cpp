#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

#define rep(i, a, b) for(int i = int(a); i < int(b); ++i)
#define per(i, a, b) for(int i = int(b)-1; i >= int(a); --i)
#define each(x, v) for(auto& x : v)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define fi first
#define se second
#define pb push_back
#define sz(v) (int)v.size()

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

string solve(string s,int i){
	if(i == -1)
		return s;
	if(s[i] == s[i+1]){
		s.erase(i+1,1);
		if(i >= 1){
			s[i] = s[i-1];
			return solve(s,i-1);
		}
		else if(i < 1 && sz(s) > (i+1)){
			s[i] = s[i+1];
			return solve(s,i);
		}
		else	
			return solve(s,i-1);
	}
	else{
		return solve(s,i-1);
	}

}

int main()
{_
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		string r = solve(s, sz(s)-1);
		cout << sz(r) << endl;
	}


	return EXIT_SUCCESS;
}


