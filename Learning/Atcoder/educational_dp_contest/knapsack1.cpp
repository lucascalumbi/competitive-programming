#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

#define rep(i, a, b) for(int i = int(a); i < int(b); ++i)
#define per(i, a, b) for(int i = int(b)-1; i >= int(a); --i)
#define each(x, v) for(auto& x : v)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define fi first
#define se second
#define pb push_back
#define sz size()

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

/* insight:
    inicializa tudo com zeros e vai atualizando o dp[j] 
    com o max entre o valor atual e o valor do item + dp[j - w[i]]
*/

int main()
{_
    int N, W; cin >> N >> W;
    vi w(N,0);
    vll v(N,0);
    rep(i,0,N) cin >> w[i] >> v[i];
    
    vll dp(W+1,0);

    rep(i,0,N)
        per(j,w[i],W+1)
            dp[j] = max(dp[j], v[i] + dp[j - w[i]]);

    auto it = max_element(all(dp));
    cout << *it << endl;

    return EXIT_SUCCESS;
}
