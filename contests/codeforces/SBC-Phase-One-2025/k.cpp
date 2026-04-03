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

ll exp(ll b, ll x){
    if(x == 0)
        return 1;

    if(x%2 == 0){
        ll temp = exp(b,x/2);
        return (temp*temp) % MOD;
    }
    else{
        return (b*exp(b,x-1)) % MOD;
    }
}

int main(){ fofo

    ll a, b; cin >> a >> b;

    ll A = exp(2,a);
    ll B = exp(2,b);
    A = A / (a==b ? 4 : 2);
    ll mult = (A*B) % MOD;
    
    cout << mult << endl;

    return EXIT_SUCCESS;
}

/*

A = 2, B = 2

11 --
01 
10 
00 --

2**A * 2**B - (2**A / 2**B)
 4   *   4 / 2

A = 1, B = 2

1 1 --
2 01 --

3 1 --
4 00 --


A = 1, B = 3

2**max(a,b);

1 1 --
2 01 --

3 1 --
4 001 --

5 1 --
6 01 --

7 1 --
8 000 --


A = 3, B = 2

(2**A / 2**B)

1 11
2 01

3 10
4 00 --

5 11
6 01

7 10
8 00 --

2**3 * 2**2
8 * 4 / 2 = 16

2**3 * 2**3

8 * 8 / 4 = 16

4 * 4 / 2 = 8


A = 3, B = 3

2**max(a,b);

1 111 --
2 0111 --

3 10011 --
4 00110 --

5 1101 --
6 0111 --

7 10011 --
8 000 -- 


1 111 --
2 01100  --

3 1000 --
4 0010 --

5 11001 --
6 01100 --

7 1000 -- 
8 000 -- 









*/























