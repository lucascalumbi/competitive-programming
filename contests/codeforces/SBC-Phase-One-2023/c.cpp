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
typedef vector<pii> vpii;
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

vi dp(10e5+100);
vector<vi> g(10e5+100, vi());
vi p(10e5+100);
vi lis;

/*
    essa dfs usa um vetor que contem o LIS 
    (longest increasing subsequence) de forma dinamica

    pra cada chama de dfs, eu considero o nó 'i', e no 
    backtracking eu o desconsidero, dessa forma é como 
    se eu estivesse resolvendo o problema do LIS pra cada 
    caminho da árvore

*/

void dfs(int i){

    int pos = lower_bound(all(lis), p[i]) - lis.begin();
    int temp; 
    bool appended = false;

    if(pos == lis.size()){
        lis.push_back(p[i]);
        appended = true;
    } else {
        temp = lis[pos];
        lis[pos] = p[i];
    } 

    dp[i] = lis.size();
    for(auto x : g[i])
        dfs(x);

    if(appended){   
        lis.pop_back();
    } else {
        lis[pos] = temp;
    }
}

int main(){ fofo

    int n; cin >> n;

    rep(i,2,n+1){
        int x; cin >> x;
        g[x].pb(i);
    }

    rep(i,1,n+1)
        cin >> p[i];

    dfs(1);

    rep(i,2,n+1) 
        cout << dp[i] << ' ';
    cout << endl;
    
    return EXIT_SUCCESS;
}