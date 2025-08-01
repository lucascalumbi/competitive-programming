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

int NMAX = 1000;
vi dp(NMAX,-1);

int fib(int n){
	if(dp[n] != -1)
		return dp[n];
	dp[n] = fib(n-1) + fib(n-2);
	return dp[n];
}


int main()
{_
	
dp[0] = 0;
dp[1] = 1;
dp[2] = 1;
	cout << fib(10) << endl;
	cout << fib(20) << endl;
	cout << fib(30) << endl;
	return EXIT_SUCCESS;
}


