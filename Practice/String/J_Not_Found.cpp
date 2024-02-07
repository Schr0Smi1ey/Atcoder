#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int fre[26];
signed main()
{
    fastio;
    string str;
    cin >> str;
    for(auto x : str)
    {
        fre[x - 'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(fre[i] == 0)
        {
            cout << char(i+'a') << endl;
            return 0;
        }
    }
    cout << "None";
    return 0;
}