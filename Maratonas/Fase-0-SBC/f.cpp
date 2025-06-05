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

const int AMOUNT = 8001;

int main()
{_
	int N;
	cin >> N;
	vector<int> ns(N);
	for(auto& n : ns)
		cin>> n;
	
	vector<int> S(AMOUNT,0);
	for(int i = 0; i < N; i++)
		for(int j = i+1; j < N; j++)
			for(int k = j+1; k < N; k++)
				for(int l = k+1; l < N; l++)
					S[4000+ns[i]+ns[j]+ns[k]+ns[l]]++;

	int Q;
	cin >> Q;

	int qi;
	for(int i = 0; i < Q; i++)
	{
		cin >> qi;
		cout <<	S[qi+4000] << endl;
	} 


	return EXIT_SUCCESS;
}


