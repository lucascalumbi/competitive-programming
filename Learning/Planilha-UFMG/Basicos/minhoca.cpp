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
#define u unsigned

int main()
{_
	u int N, M; cin >> N >> M;

	vector<vector<int>> farm(N+1,vector<int>(M+1,0));
	
	for(int i = 0; i < N; i++)
	{	
		int sraw = 0;
		for(int j = 0; j < M; j++)
		{
			cin >> farm[i][j];
			sraw += farm[i][j];
			farm[N][j] += farm[i][j];
		}
		farm[i][M] = sraw;
	}
			
	int tot = 0;
	for(int i=0; i<N; i++)
		tot = max(tot,farm[i][M]);

	for(int i=0;i<M;i++)
		tot = max(tot,farm[N][i]);

	cout << tot << endl;

	return EXIT_SUCCESS;
}


