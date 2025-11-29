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
#define sz size()

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll solve(vector<int>& v, vector<ll>& dp,int n){
	if(dp[n] != -1)
		return dp[n];
	dp[n] = min(solve(v,dp,n-2) + abs(v[n-2]-v[n]),solve(v,dp,n-1) + abs(v[n-1]-v[n]));
	return dp[n];	

}

int main()
{_
	int n; cin >> n;
	vector<ll> dp(n+1,-1);
	vector<int> v(n+1,-1);
	rep(i,1,n+1)
		cin >> v[i]; 
	dp[0] = 0;
	dp[1] = 0;
	if(n > 1)
		dp[2] = abs(v[2] - v[1]);
	cout << solve(v,dp,n) << endl;

	return EXIT_SUCCESS;
}


