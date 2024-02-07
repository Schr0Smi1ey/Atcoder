#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin >> n;
    string str;
    cin >> str;
    int cnt = 0;
    int pos = str.find("ABC");
    while(pos != string::npos)
    {
        cnt++;
        pos = str.find("ABC",pos+1);
    }
    cout << cnt << endl;
    return 0;
}