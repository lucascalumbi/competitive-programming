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
	int N,k; cin >> N;
	
	while(N--)
	{
		cin >> k;
		if(k == 2 || k == 3){
			cout << "Prime"<< endl;
			continue;
		}
		if(k%2==0 || k%3==0){
			cout << "Not Prime" << endl;
			continue;
		}
		
		bool prime = true;
		for(int i = 5; i<sqrt(k)+1; i++)
			if(k%i==0)
			{
				cout << "Not Prime" << endl;
				prime = false;
				break;
			}
		if(prime)
			cout << "Prime" << endl;
	}
				
		
	return EXIT_SUCCESS;
}


