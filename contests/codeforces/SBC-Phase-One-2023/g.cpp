#include <bits/stdc++.h>
using namespace std;

#define fofo ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
#define dbgt(x) cout << #x << " = " << get<0>(x) << ' ' << get<1>(x) << ' ' << get<2>(x) << endl
#define dbg2D(v) for(auto r : v){ for(auto x : r) cout << x << ' '; cout << endl; }
#define dbgvec(v) for(auto x : v) cout << x << ' '; cout << endl
#define dbgvec1(v) for(auto [x,y,z] : v) cout << z << ' '; cout << endl

#define rep(i, a, b) for(int i = int(a); i < int(b); ++i)
#define per(i, a, b) for(int i = int(b)-1; i >= int(a); --i)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define fi first
#define se second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef tuple<int, int, int> piii;
typedef vector<piii> vpiii;
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

bool above(pii a, pii b, pii c){

    if(a.fi == c.fi){
        bool ans = (a.fi == b.fi && b.fi == c.fi && a.se <= b.se && b.se <= c.se);
        return ans;
    }
    double m = 1.0 * (c.se - a.se) / (1.0 * (c.fi - a.fi));
    return b.se >= (a.se + m*(b.fi-a.fi));
}

bool below(pii a, pii b, pii c){

    if(a.fi == c.fi){
        bool ans = (a.fi == b.fi && b.fi == c.fi && a.se <= b.se && b.se <= c.se);
        return ans;
    }
    double m = 1.0 * (c.se - a.se) / (1.0 * (c.fi - a.fi));
    return b.se <= (a.se + m*(b.fi-a.fi));
}

int main(){ fofo

    int n; cin >> n;
    vpiii v(n);
     
    int count = 1;
    for(auto& [x,y,z] : v){
        cin >> x >> y;
        z = count++;
    }

    sort(all(v));

    piii l = v[0], r = v[n-1];

    vpiii a; a.pb(l);
    vpiii b; b.pb(l);

    rep(i,1,n-1){
        auto [x,y,z] = v[i];
        if(above({get<0>(l), get<1>(l)},{x,y},{get<0>(r), get<1>(r)}))
            a.pb(v[i]);
        else
            b.pb(v[i]);
    }
    a.pb(r);
    b.pb(r);

    set<int> ans;
    ans.insert(get<2>(l));
    ans.insert(get<2>(r));

    int i = 0,j = 1,k = 2;
    if(a.size() > 2)
        while(k <= a.size()){
            if(k == a.size())
                ans.insert(get<2>(a[i]));

            auto [x0,y0,z0] = a[i];
            auto [x1,y1,z1] = a[j];
            auto [x2,y2,z2] = a[k];

            if(above({x0,y0},{x1,y1},{x2,y2})){
                ans.insert(z0);
                i = j;
                j = k;
                k++;

            } else {
                j++;
                k++;
            }
        }

    i = 0; j = 1; k = 2;
    if(b.size() > 2)
        while(k <= b.size()){
            if(k == b.size())
                ans.insert(get<2>(b[i]));

            auto [x0,y0,z0] = b[i];
            auto [x1,y1,z1] = b[j];
            auto [x2,y2,z2] = b[k];

            if(below({x0,y0},{x1,y1},{x2,y2})){
                ans.insert(z0);
                i = j;
                j = k;
                k++;
            } else {
                j++;
                k++;
            }
        }

    vi p;
    for(auto it = ans.begin(); it != ans.end(); ++it)
        p.pb(*it);

    rep(i,0,p.size())
        cout << p[i] << ' ';
    cout << endl;

    return EXIT_SUCCESS;
}