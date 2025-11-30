#include <bits/stdc++.h>
using namespace std;

#define dbgvec(v) for(auto x : v){cout << x << " ";} cout << endl;
#define rep(i,a,b) for(int i = int(a); i < int(b); i++)
#define per(i,a,b) for(int i = int(b)-1; i >= int(a); i--)
const int MOD = 1e9 + 7;
#define pb push_back
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
#define se second
#define fi first
#define all(x) (x).begin() (x).end() 

vi p;
vi b;
vector<vi> G;
vi w;
vi visi;

void dfs(int s, bool v){
    visi[s] = 1;
    if(v)
        p.pb(w[s]);
    else
        b.pb(w[s]);

    for(int x : G[s]){
        if(!visi[s])
            dfs(x,!v); 
    }
    
}

int main(){

    int n; cin >> n;
    w = vi(n);
    visi = vi(n);
    G = vector<vi>(n);
    for(auto& x : w)
        cin >> x;
    
    p = vi();
    b = vi();

    rep(i,0,n-1){
        int a, b;
        cin >> a >> b;
        G[a-1].pb(b-1);
        G[b-1].pb(a-1);
    }

    dfs(0,true);
    dbgvec(p);
    dbgvec(b);

    ll sum1 = 0, sum2 = 0;
    rep(i,0,p.size())
        sum1 += p[i];
    rep(i,0,b.size())
        sum2 += b[i];

    cout << max(sum1,sum2) << endl;


}   