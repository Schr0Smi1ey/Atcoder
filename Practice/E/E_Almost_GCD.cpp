#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int ans = 0,max =  0;
    for(int i=2;i<=1000;i++)
    {
        int count = 0;
        for(int j = 0;j<n;j++)
        {
            if(arr[j] % i == 0)
            {
                count++;
            } 
        }
        if(count >= max)
        {
            max = count;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}