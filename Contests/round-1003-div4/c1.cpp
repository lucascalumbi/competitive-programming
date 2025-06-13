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
		vi c(n);
		rep(i,0,n){
			c[i] = b[0] - a[i];
		}
		a[0] = min(a[0],c[0]);
		a[n-1] = max(a[n-1],c[n-1]);

		bool r = true;
		bool p = n > 1 ? (a[0] > a[1]) : false;
		rep(i,1,n){
			if(p){
				if(a[i-1] <= c[i])
					a[i] = c[i];
				else{
					r = false;
					break;
				}
			}else{
				if(a[i-1] <= min(a[i],c[i]))
					a[i] = min(a[i],c[i]);
				else if(a[i-1] <= max(a[i],c[i]))
					a[i] = max(a[i],c[i]);
				else{
					r = false;
					break;
				}
			}
			p = (i < n-1) ? a[i] > a[i+1] : false;
		}

		if(r)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}


	return EXIT_SUCCESS;
}


