#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x.fi << " " << x.se << endl

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

int main()
{_
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vector<vector<pii>> v(101);
		rep(i,0,n)
			rep(j,0,m){
				int x; cin >> x;
				v[x].pb({i,j});
			}
		
		per(i,1,101){
			if(v[i].size()){
				if(v[i].size() <= 2)
					cout << i-1 << endl;
				else{
					int z = v[i].size();
					bool find = false;
					rep(a,0,z-2){
						rep(b,a+1,z-1){
							rep(c,b+1,z)
								if((v[i][a].fi != v[i][b].fi && v[i][a].fi != v[i][c].fi && v[i][b].fi != v[i][c].fi) && (v[i][a].se != v[i][b].se && v[i][a].se != v[i][c].se && v[i][b].se != v[i][c].se)){
									find = true;
									//dbg(v[i][a]); dbg(v[i][b]); dbg(v[i][c]);
									break;
								}
							if(find)
								break;
						}
					if(find)
						break;
					}
					if(find)
						cout << i << endl;
					else 
						cout << i-1 << endl;
				}
				break;
			}
		}

	}


	return EXIT_SUCCESS;
}


