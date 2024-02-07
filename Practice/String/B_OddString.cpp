#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    string str;cin >> str;
    string result = "";
    for(int i=0;i<str.size();i++)
    {
        if((i+1)&1)
        result+=str[i];
    }
    cout << result << endl;
    return 0;
}