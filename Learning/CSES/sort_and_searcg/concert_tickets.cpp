#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

#define rep(i, a, b) for(int i = int(a); i < int(b); ++i)
#define per(i, a, b) for(int i = int(b)-1; i >= int(a); --i)
#define each(x, v) for(auto& x : v)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define fi first
#define se second
#define pb push_back
#define sz size()

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vi h;

int bs(int l, int r, int x, int* lp){
    if(l>r){
        *lp = l;
        return -1;
    }
    int m = l + (r-l+1)/2;
    if(h[m] == x)
        return m;
    if(h[m] > x)
        return bs(l,m-1,x,lp);
    return bs(m+1,r,x,lp);
}

int main()
{_
    int n, m; cin >> n >> m;
    map<int,int> g;
    h = vi(n);
    rep(i,0,n){
        cin >> h[i];
        g[h[i]]++;
    } 
    vi t(m);
    rep(i,0,m) cin >> t[i];
    sort(all(h));

    for(auto x : t){
        int lp = -1;
        int p = bs(0,n-1,x,&lp);
        if(p != -1 && g[x]){
            g[x]--;
            cout << x << endl;
        } else {
            per(i,-1,lp+1){
                if(i == -1){
                    cout << i << endl;
                    break;
                }
                if(h[i] >= x)
                    continue;
                if(h[i] < x && g[h[i]]){
                    g[h[i]]--;
                    cout << h[i] << endl;    
                    break;
                }
            }
        }
    }

    return EXIT_SUCCESS;
}