#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
signed main()
{
    fastio;
    int n;cin>>n;int arr[n];
    for(auto &x:arr)
    cin>>x;
    sort(arr,arr+n);
    bool flag = false;
    int  mul = 1,compare = 1000000000000000000;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            mul = 0;break;
        }
        if(compare/arr[i]<mul)
        {
            flag = true;
            break;
        }
        mul*=arr[i];
    }
    if(flag)
    cout<<-1;
    else
    cout<<mul;
    return 0;
}