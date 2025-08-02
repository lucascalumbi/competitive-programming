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

int main()
{_
    int N, W; cin >> N >> W;
    vector<pii> v(N);
    for(auto& [a,b] : v)
        cin >> a >> b;

    sort(all(v));

    vll dp[N];
    rep(i,0,N) dp[i] = vll(W+1);
    
    dp[0][0] = 0;

    rep(j,1,W+1){
        if(j-v[0].fi >= 0){
            dp[0][j] = max(dp[0][j-1], v[0].se + dp[0][j-v[0].fi]);
            rep(k,j+1,W+1) 
                dp[0][k] = dp[0][j];
            break;
        }
        else 
            dp[0][j] = dp[0][j-1];
    }

    rep(i,1,N){
        rep(j,0,W+1){
            if(j-v[i].fi >= 0)
                dp[i][j] = max(dp[i-1][j], v[i].se + dp[i-1][j-v[i].fi]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    cout << dp[N-1][W] << endl;

    return EXIT_SUCCESS;
}
