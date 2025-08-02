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

int main()
{_
    int n, x; cin >> n >> x; 
    
    vi v(n); 
    rep(i,0,n) cin >> v[i];

    sort(all(v));

    int in = 0, fim = n - 1, r = 0;
    
    while (fim >= in)
    {
        if(v[fim] > x){
            fim--;
        }else if(v[fim] == x || v[fim] + v[in] > x){
            r++;
            fim--;
        }else {
            r++;
            fim--;
            in++;
        }
    }

    cout << r << endl;
    

    return EXIT_SUCCESS;
}