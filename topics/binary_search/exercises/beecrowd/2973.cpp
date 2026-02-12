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

const int MAX = 1e5+10;
int n, c, t;
vi p(MAX);

bool verify(ll v){

    int comp = 1;
    ll tm = t*v; // tempo maximo

    rep(i,0,n){
        if(tm >= p[i]){
            tm -= p[i];
        }
        else{
            i--;
            comp++;
            tm = t*v;
        }

        if(comp > c)
            return 0;
    }
    return 1;
}

int main(){ fofo

    cin >> n >> c >> t;
    rep(i,0,n)
        cin >> p[i];

    int l = 0, r = 1e9+50;
    while(l < r){
        ll m = (l+r) / 2;

        if(verify(m))
            r = m;
        else
            l = m+1;
    }

    cout << l << endl;

    return EXIT_SUCCESS;
}