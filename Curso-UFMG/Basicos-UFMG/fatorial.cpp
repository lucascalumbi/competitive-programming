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
	int N;
	cin >> N;
	
	ll fat = 1;
	for(int i = 1; i <= N; i++)
		fat*=i;

	cout << fat << endl;	


	return EXIT_SUCCESS;
}


