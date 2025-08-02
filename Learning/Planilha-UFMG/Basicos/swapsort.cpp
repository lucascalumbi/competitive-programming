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
	int n; cin >> n;
	vector<int> arr(n);
	for(auto &i : arr)
		cin >> i;
	
	vector<pair<int,int>> swaps;	
	int i = 0, j;
	while(i<n){
		int min_i = i;
		for(j=i+1;j<n;j++)
			if(arr[j] < arr[min_i])
				min_i = j;
		if(min_i == i){
			i++;
			continue;
		}
		swaps.push_back({i,min_i});
		swap(arr[i],arr[min_i]);
		i++;
	}
	
	cout << swaps.size() << endl;
	for(auto p : swaps)
		cout << p.f << "  " << p.s << endl;

	return EXIT_SUCCESS;
}


