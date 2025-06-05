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

ll temp = 0;

ll mdc(ll a, ll b)
{	
	while(b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
		
	return a;
}

int main()
{_
	ll X = 1, Y, K;
	cin >> Y >> K;
	//Y = 1000000000;
	//K = 1000000000;
	
	while(K--)
	{
		if(X == Y)
		{
			X = X + Y*(K+1);
			break;
		} 
		X = X + mdc(X,Y);	
	}
	
	cout << X << endl;

	return EXIT_SUCCESS;
}


