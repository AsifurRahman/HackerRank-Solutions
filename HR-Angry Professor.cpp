#include<bits/stdc++.h>
using namespace std;
#define ll long long
int  main()
{
    ll n,k,i,tc;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        ll x,pr=0;
        for(i=0;i<n;i++){
            cin>>x;
            if(x<=0)
                pr++;
        }
        if(pr>=k)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
