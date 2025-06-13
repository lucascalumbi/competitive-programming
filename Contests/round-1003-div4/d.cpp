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
typedef pair<ll, ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{_
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vi as[n];
		rep(i,0,n)
			rep(j,0,m){
				int x; cin >> x;
				as[i].pb(x);
			}
		vector<pll> v(n);
		rep(i,0,n){
			ll sum = 0, score = 0;
			rep(j,0,m){
				score += (sum + as[i][j]);
				sum += as[i][j];
			}
			v[i] = {sum,score};
			//dbg(sum);dbg(score);
		}
		sort(rall(v));
		ll max_score = 0;
		rep(i,0,n){
			max_score += v[i].se + (n-(i+1))*m*v[i].fi;	
		}
		cout << max_score << endl;
	}


	return EXIT_SUCCESS;
}


