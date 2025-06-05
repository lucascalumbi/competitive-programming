#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << "= " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define f first
#define s second

string binary_f(ll dex) {
    string binary = "";
    if (dex == 0) return "0";
    while (dex > 0) {
        binary += (dex % 2 == 0) ? "0" : "1";
        dex /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main()
{_
	ll x; cin >> x;
    string y = binary_f(x);

    bool par = (y.size() % 2) == 0;

    string comeco = "", fim = "";
    if(par) {
        for(int i = 0; i < y.size()/2; i++) {
            comeco += y[i];
        }
        for(int i = y.size()/2; i < y.size(); i++) {
            fim += y[i];
        }
    } else {
        for(int i = 0; i <= y.size()/2; i++) {
            comeco += y[i];
        }
        for(int i = y.size()/2; i < y.size(); i++) {
            fim += y[i];
        }
    }

    reverse(fim.begin(), fim.end());

	string sla = comeco;
	reverse(sla.begin(), sla.begin());
	dbg(y);
	dbg(comeco);
	dbg(fim);
	unsigned int superior = x / (pow(10,floor(y.size()/2)));
	unsigned int espelhado = stoi(sla);
	unsigned int inferior = x % (int) (pow(10,floor(y.size()/2)));

	dbg(superior);
	dbg(espelhado);
	dbg(inferior);

	unsigned int resultado = inferior - espelhado;
	dbg(superior);
	dbg(espelhado);
	dbg(inferior);
	
	if(resultado > 0)
		cout << x-resultado << endl;
	else
	{	
		superior-1;
		string z = bitset<8>(superior).to_string();
		string k = z;
		reverse(z.begin(), z.begin());
		z = z+k;
		cout << z << endl;
	}

	return EXIT_SUCCESS;
}

	
