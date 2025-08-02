#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2D(v) for(auto r : v){ for(auto x : r) cout << x << ' '; cout << endl; }
#define dbgvec(v) for(auto x : v) cout << x << ' '; cout << endl

#define rep(i, a, b) for(int i = int(a); i < int(b); ++i)
#define per(i, a, b) for(int i = int(b)-1; i >= int(a); --i)
#define repi(i, a, b, inc) for(int i = int(a); i < int(b); i += inc)
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
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<string> vs;

const int INF  = 0x3f3f3f3f;
const ll  LINF = 0x3f3f3f3f3f3f3f3fLL;
const float  FINF = 1e30f;     // "infinito" para float
const double DINF = 1e100;     // "infinito" para double
const int    MOD  = 1e9 + 7;
const double EPS  = 1e-9;
const double PI   = acos(-1.0);

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

string s, t; 
int n, m;
vector<vi> dp;

string build(int i, int j) {
    if (i == 0 || j == 0) return "";
    if (dp[i][j] > dp[i-1][j] && dp[i][j] > dp[i][j-1]) {
        return build(i-1, j-1) + s[i-1];
    } else if (dp[i][j] == dp[i-1][j]) {
        return build(i-1, j);
    } else {
        return build(i, j-1);
    }
}

int main()
{ _
    cin >> s >> t;
    n = s.size(); m = t.size();
    dp = vector<vi>(n+1, vi(m+1, 0));
    
    rep(i,1,n+1){
        rep(j,1,m+1){
            if(s[i-1] == t[j-1]) 
                dp[i][j] = 1 + dp[i-1][j-1];
            else 
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    //dbg2D(dp);
    cout << build(n, m) << endl;
    
    return EXIT_SUCCESS;
}