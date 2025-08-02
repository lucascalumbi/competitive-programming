#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << "= " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define f first
#define s second

int main()
{_
	int t; cin >> t;

	while(t--){
		int n; cin >> n;
		
		vector<int> vi(n);
		for(auto& i : vi)
			cin >> i;	
		int r = 0, m = INT_MAX;
		for(int i=n-1;i>=0;i--){
			if(vi[i] > m)
				r++;
			else
				m = vi[i];
		}
		cout << r << endl;
	}

	return EXIT_SUCCESS;
}


