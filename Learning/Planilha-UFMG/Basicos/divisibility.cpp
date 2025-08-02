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
	unsigned int t, a, b;
	cin >> t;
	
	while(t--)
	{
		cin >> a >> b;
		if(a%b==0)
		{
			cout << 0 << endl;
			continue;
		}
		unsigned int q = 0;
		q = a/b;	

		cout << (q+1)*b-a << endl;
	} 


	return EXIT_SUCCESS;
}


