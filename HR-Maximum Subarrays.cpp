#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,tc;
    cin>>tc;
    while(tc--){
        cin>>n;
        ll a[n+1],cnt=0,mx=-100000;
        for(i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]<0)
                    cnt++;
                mx=max(mx,a[i]);
            }
            if(cnt==n)
            {
                cout<<mx<<" "<<mx<<endl;
            }
        else{
        ll sum=0,n_sum=0,ans=0;
        for(i=0;i<n;i++){
            sum+=a[i];
            if(sum<0)
                sum=0;
            ans=max(sum,ans);
            if(a[i]>0)
                n_sum+=a[i];
        }
        cout<<ans<<" "<<n_sum<<endl;
    }
}
    return 0;
}


