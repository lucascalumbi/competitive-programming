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
		string a; cin >> a;
		string b; cin >> b;
		string c; cin >> c;
		
		string tempa = a, tempb = b;
		bool isequal = true;
		rep(i,0,a.size()){
			if(c[i] == b[i])
				tempa[i] = c[i];
			else if(c[i] == a[i])
				tempb[i] = c[i];
			else{
				isequal = false;
				break;
			}
		}
		if(isequal)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
	}

	return EXIT_SUCCESS;
}


