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

bool solve(string p, string b){
    b+=b;
    while(b.size() <= p.size())
        b += b;

            
    // costruindo a longest prefix suffix
    vi lps(p.size(),0);
    int i = 0, j = 1;
    while(j < p.size()){

        if(p[i] == p[j]){
            i++;
            lps[j] = i;
            j++;
        }
        else{
            if(i != 0){
                i = lps[i-1];
            }else{
                // i = 0
                lps[j] = i;
                j++;
            }
        }
    }
    dbgvec(lps);

    // algortimo kmp
    bool ans = false;
    i = 0, j = 0;
    while(i < b.size()){
        //dbg(i); dbg(j);
        if(b[i] == p[j]){
            j++;
            i++;
        }
        else
            if(j != 0)
                j = lps[j-1];
            else
                i++;

        if(j == p.size()){
            ans = true;
            break;
        }
    }

    return ans;
}

int main(){ fofo

    int t; cin >> t;
    while(t--){
        string p, b; cin >> p >> b;

        string c = b;
        rep(i,0,b.size())
            c[b.size()-i-1] = b[i];
        
        bool ans = solve(p,b) || solve(p,c);
        cout << (ans ? "S" : "N") << endl;
    }

    return EXIT_SUCCESS;
}