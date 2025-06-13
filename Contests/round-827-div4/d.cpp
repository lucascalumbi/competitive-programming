#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

#define rep(i, a, b) for(int i = int(a); i < int(b); ++i)
#define per(i, a, b) for(int i = int(b)-1; i >= int(a); --i)
#define each(x, a) for(auto& x : a)

#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{_
	vector<int> dp[1001];
	rep(i,1,1001)
		rep(j,1,1001)
			if(gcd(i,j) == 1)
				dp[i].pb(j);	
	

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> vn[1001];
		rep(i,1,n+1){
			int x; cin >> x;
			vn[x].pb(i);
		}

		int r = -1;
		rep(i,1,1001){
			for(int j : dp[i]){
				if(!vn[i].empty() && !vn[j].empty())
					r = max(r,vn[i].back() + vn[j].back());
			}
		}
		cout << r << endl;
	}


	return EXIT_SUCCESS;
}


