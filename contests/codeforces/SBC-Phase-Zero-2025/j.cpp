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

    ll n, k; cin >> n >> k;
    
    vi a(n+1);
    rep(i,1,n+1)
        cin >> a[i];
    vi dp(n+1);
    vi b(n+1);

    per(j,1,n+1){
        ll x = a[j];
        int i = j;

        while(true){

            if(x > a[i]){
                b[j] = i;
                break;
            } else {
                if(b[i]){
                    x = x + k*dp[i];
                    dp[j]+=dp[i];
                    i = b[i];
                } else {
                    dp[j]++;
                    x += k;
                    i = (i%n)+1;
                }
            }

        }
    }

    rep(i,1,n+1)
        cout << b[i] << " ";
    cout << endl;

    return EXIT_SUCCESS;
}