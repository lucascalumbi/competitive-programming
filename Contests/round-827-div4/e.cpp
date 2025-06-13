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
	int t; cin >> t;
	while(t--){
		int n, q; cin >> n >> q;

		vi vn(n);
		each(x,vn)
			cin >> x;

		vi vk(q);
		each(x,vk)
			cin >> x;
			
		int last_ki = 0;
		ll last_meters;
		int last_j = 0;
		
		rep(i,0,q){
			ll meters = 0;
			int a = 0;
			
			if(vk[i] > vk[last_ki]){
				meters = last_meters;	
				a = last_j;
			}
			
			rep(j,a,n){
				if(vk[i] >= vn[j])
					meters += vn[j];
				else{
					
					last_j = j;
					last_meters = meters;
					last_ki = i;
					
					break;
				}
			}
			cout << meters << " ";
		}
		cout << endl;
		
	}


	return EXIT_SUCCESS;
}


