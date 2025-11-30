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


int main(){

    int n; cin >> n;
    int p; cin >> p;
    
    cout << ((n >> p) & 1) << endl;

}