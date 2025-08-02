#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << "i = " << x << endl
#define forn(i, n) for(ll i = 0; i < int(n); i++)
#define range(a, b) for(int i = a; i < int(b); i++)

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define f first
#define s second

ll fat(ll n)
{
	if(n == 0 || n == 1)
		return 1;
	
	int r = 1;
	for(int i = 2; i <= n; i++)
		r*=i;
	return r;
}

int main()
{_
	int n; cin >> n;
	forn(nn,n){
		int x; cin >> x;
		cout << "Instancia " << nn+1 << endl;
		int k = fat(x);
		string str = to_string(k);
		cout << str[0] << endl;
	//	dbg(x);
	}


	return EXIT_SUCCESS;
}


