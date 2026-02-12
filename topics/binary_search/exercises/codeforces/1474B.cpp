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

int MAX = 1e5+1;

int main(){ fofo

    int t; cin >> t;
    vector<bool> v = vector<bool>(MAX,true);
    vi vp;
    vp.push_back(1);
    for(ll i = 2;i*i <= MAX; i++){
        if(v[i]){
            for(ll j = i * i; j <= MAX; j+=i)
                v[j] = false;
        }
    }
    for (int i = 2; i <= MAX; i++) {
        if (v[i]) vp.push_back(i);
    }

    while(t--){
        int d; cin >> d;
        
        auto it = lower_bound(all(vp),d+1);
        
        int p = *it;
        
        it = lower_bound(all(vp),p+d);
        
        int q = *it;

        cout << p*q << endl;
    }
    
    return EXIT_SUCCESS;
}