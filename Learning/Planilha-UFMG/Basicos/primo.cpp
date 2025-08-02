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
	unsigned int N;
	cin >> N;	
	for(unsigned int i = 2; i <= N; i++)
		if(i == N)
		{
			cout << "sim" << endl;
			break;
		}
		else if(N%i==0)
		{
			cout << "nao" << endl;
			break;
		}



	return EXIT_SUCCESS;
}


