#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 +5;
typedef pair<int,int> pii;
const int mod = 1e9 + 7;
void solution(){
    int n;cin >> n;
    int total = 0;
    int arr[n+2],suffix[n+2];
    arr[n+1] = suffix[n+1] = arr[0] = suffix[0] = 0;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    for(int i = n;i >= 0;i--){
        suffix[i] = (suffix[i+1] + arr[i]) % mod;
    }
    int ans = 0;
    for(int i=1;i <= n;i++){
        ans = (ans + ((arr[i] * suffix[i+1]) % mod)) % mod;
    }
    cout << ans << endl;
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}