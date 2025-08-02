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

int main()
{_
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vi a(n);
		each(x,a)
			cin >> x;
		vi b(m);
		each(x,b)
			cin >> x;
		
		sort(all(b));
		
		a[0] = b[0] - a[0];
		bool r = true;
		rep(i,0,n){
			
		}

		if(r)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}


	return EXIT_SUCCESS;
}


