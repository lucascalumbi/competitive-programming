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

string print_mult(int a, int b)
{
	string str = (to_string(a) + " x " + to_string(b));
	return str;	
}

bool is_special(int a)
{
	int oa = floor(log10(a));
	for(int i=1; i<=pow(10,oa); i*=10)
		if(a%i != 0){
			return false;
		}

	return true;
}

pair<int,int> separate(int a)
{
	int oa = floor(log10(a));
	int oaf = (int) pow(10,oa);
	int f = a / oaf;
	int oas = (int) pow(10,oa-1);
	int s = (a / oas)%10;
	int i = 0;
	while((s+i)%10 !=0)
		i++;

	return {(f+1)*oaf,-i*oas};
}



void print_exp(int a, int b)
{
	bool isas = is_special(a);
	bool isbs = is_special(b);
	
	if(isas && isbs)
		cout << print_mult(a,b) << endl;
	else if(!isas){
		auto p = separate(a);
		cout << print_mult(p.f,b);
		if(p.s > 0)
			cout << " + " << print_mult(p.s,b) << endl;
		else
			cout << " - " << print_mult(-p.s,b) << endl;
	}
	else{
		auto p = separate(b);
		cout << print_mult(p.f,a);
		if(p.s > 0)
			cout << " + " << print_mult(p.s,a) << endl;
		else
			cout << " - " << print_mult(-p.s,a) << endl;
	}	
}
int main()
{_
	int T; cin >> T;
	
	while(T--){
		int a,b; cin >> a >> b;
		print_exp(a,b);		

	}


	return EXIT_SUCCESS;
}


