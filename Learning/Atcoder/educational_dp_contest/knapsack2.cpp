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

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll minll(ll a, ll b) {
    return a < b ? a : b;
}

/* insight:
    inicializa tudo com infinito e vai atualizando o dp[j] 
    com o min entre o peso atual e o peso do item + dp[j - v[i]]

    no final, procura o maior valor de v[i] que tem peso <= W
*/

int main()
{_
    int N, W; cin >> N >> W;
    vll w(N, 0);
    vi v(N, 0);
    rep(i, 0, N) cin >> w[i] >> v[i];
    vll dp(N*1000+1, LINF);
    dp[0] = 0;

    rep(i,0,N){
        per(j, v[i], N*1000+1) {
            dp[j] = minll(dp[j], dp[j - v[i]] + w[i]);
        }
    }

    int r = 0;
    rep(i, 0, N*1000+1) {
        if (dp[i] <= W) 
            r = i;
    }

    cout << r << endl;

    return EXIT_SUCCESS;
}