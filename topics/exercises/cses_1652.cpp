#include <bits/stdc++.h>
using namespace std;

#define fofo ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2D(v) for(auto r : v){ for(auto x : r) cout << x << ' '; cout << endl; }
#define dbgvec(v) for(auto x : v) cout << x << ' '; cout << endl

#define rep(i, a, b) for(int i = int(a); i < int(b); ++i)
#define per(i, a, b) for(int i = int(b)-1; i >= int(a); --i)
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

const int INF  = 0x3f3f3f3f;
const ll  LINF = 0x3f3f3f3f3f3f3f3fLL;
const float  FINF = 1e30f;
const double DINF = 1e100;
const int    MOD  = 1e9 + 7;
const double EPS  = 1e-9;
const double PI   = acos(-1.0);

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main(){ fofo

    int n, q; cin >> n >> q;

    vi v[n+1];
    rep(i,0,n+1) v[i].pb(0);

    rep(i,1,n+1)
        rep(j,1,n+1){
            char c; cin >> c;
            int k = c == '*' ? 1 : 0;
            v[i].pb(v[i][j-1]+k);
        }

    //dbg2D(v);

    while(q--){
        int y1, x1, y2, x2; 
        cin >> y1 >> x1 >> y2 >> x2;

        ll sum = 0;
        rep(i,y1,y2+1)
            sum += (v[i][x2] - v[i][x1-1]);

        cout << sum << endl;
    }

    return EXIT_SUCCESS;
}