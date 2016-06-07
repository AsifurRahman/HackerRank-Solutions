#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[101];
int  main()
{
    ll n,i;
    while(cin>>n){
            ll x;
        for(i=0;i<n;i++){
            cin>>x;
            a[x]++;
        }
        for(i=0;i<=100;i++){
            if(a[i]==1)
                {
                    cout<<i<<endl;
                    break;
                }
        }
    }
    return 0;
}
