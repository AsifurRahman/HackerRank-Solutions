#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,n,j,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        ll a[n+1],sum[n+1],ans;
        for(i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        sum[0]=a[0];
        for(i=1; i<n; i++)
        {
            sum[i]=sum[i-1]+a[i];
        }

        ans=sum[n-1];
        for(i=1; i<n; i++)
        {
            ll point=sum[n-1]-sum[i-1];
            ans=max(ans,point*(i+1));
        }
        cout<<ans<<endl;
    }
    return 0;
}
