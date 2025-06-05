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
		int a,b;
		cin >> a >> b;
		if(a < b){
			int dif = b-a;
			if(dif%2 == 0){
				cout << 2 << endl;		
			}		
			else{
				cout << 1 << endl;
			}
		}
		else if(a == b){
			cout << 0 << endl;
		}
		else{ // a > b
			int dif = a-b;
			if(dif%2 == 0){
				cout << 1 << endl;
			}
			else{
				cout << 2 << endl;
			}
		}
	}


	return EXIT_SUCCESS;
}


