#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin >> N;

    while(N--){
        
        int a,b,x,y;
        cin >> a >> b >> x >> y;

        x++;y++;

        int maxx, maxy;
        maxx = max(a-x,x-1);
        maxy = max(b-y,y-1);

        cout << max(maxx*b,maxy*a) << endl;
    }


    return 0;
}