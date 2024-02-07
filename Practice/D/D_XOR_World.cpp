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
int get_xor(int n){
    int flag = n % 4;
    if(flag == 0) return n;
    if(flag == 1) return 1;
    if(flag == 2) return n + 1;
    if(flag == 3) return 0;
}
void solution(){
    int a,b;cin >> a >> b;
    cout << (get_xor(a-1)^get_xor(b)) << endl;
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