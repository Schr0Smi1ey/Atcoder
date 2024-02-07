#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    string str;cin>>str;
    if(str=="ACE" || str=="BDF" ||  str== "CEG" || str == "DFA" || str== "EGB" || str==  "FAC" || str== "GBD")
    cout<<"Yes";
    else
    cout<<"No"<<endl;
    return 0;
}