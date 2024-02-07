#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int x, y ; cin >> x >> y;
    int cnt = 0;
    while(x <= y)
    {
        cnt++;
        x*=2;
    }
    cout << cnt ;
    return 0;
}