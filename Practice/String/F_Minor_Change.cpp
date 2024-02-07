#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    string str,temp;
    cin >> str >> temp;
    int cnt = 0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] != temp[i])
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}