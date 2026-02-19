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
typedef vector<pii> vpii;
typedef vector<pll> vpll;

const int INF  = 0x3f3f3f3f;
const ll  LINF = 0x3f3f3f3f3f3f3f3fLL;
const float  FINF = 1e30f;
const double DINF = 1e100;
const int    MOD  = 1e9 + 7;
const double EPS  = 1e-9;
const double PI   = acos(-1.0);

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

vector<vi> v;
vi vis;

void dfs(int s, int comp){
    if(vis[s])
        return;
    vis[s] = comp;
    for(int i : v[s]){
        if(!vis[i]){
            dfs(i,comp);
        }
    }
}

int main(){ fofo

    int n, m; cin >> n >> m;
    vis = vi(n+1,0);
    v = vector<vi>(n+1, vi());
    rep(i,0,m){
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int comp = 0;
    rep(i,1,n+1){
        if(!vis[i])
            comp++;
        dfs(i,comp);
    }

    dbgvec(vis);
    int last = 1;
    cout << --comp << endl;
    rep(i,1,n+1){
        if(last < vis[i]){
            cout << last << " " << i << endl;
            last = vis[i];
        }
    }

    return EXIT_SUCCESS;
}