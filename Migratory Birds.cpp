#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,n,cnt;
    while(cin>>n)
    {
        ll a[n+1];
        map<ll,ll>m;
        for(i=0;i<n;i++){

            cin>>a[i];
            m[a[i]]++;
        }
        sort(a,a+n);
        ll v,mx=0;
        for(i=0;i<n;i++){
            if(m[a[i]]>mx){
                mx=m[a[i]];
                v=a[i];
            }
        }
        cout<<v<<endl;
    }
    return 0;
}
