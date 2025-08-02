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

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{_
    int n; cin >> n;
    vector<tuple<int,int,int>> v(n);
    for(auto& [a,b,c] : v)
        cin >> a >> b >> c;
    vi dp[3];
    rep(i, 0, 3) dp[i] = vector<int>(n, -INF);
    
    auto [a, b, c] = v[0];
    dp[0][0] = a;
    dp[1][0] = b;
    dp[2][0] = c;
    rep(i, 1, n) {
        auto [a, b, c] = v[i];
        dp[0][i] = a + max(dp[1][i-1], dp[2][i-1]); 
        dp[1][i] = b + max(dp[0][i-1], dp[2][i-1]);
        dp[2][i] = c + max(dp[0][i-1], dp[1][i-1]);
    }
    cout << max({dp[0][n-1], dp[1][n-1], dp[2][n-1]}) << endl;
}


