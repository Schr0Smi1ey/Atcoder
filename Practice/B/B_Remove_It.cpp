#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
signed main()
{
    fastio;
    int n,k,x;cin >> n >> k;
    while(n--){
        cin >> x;
        if(x != k){
            cout << x << " ";
        }
    }
    return 0;
}