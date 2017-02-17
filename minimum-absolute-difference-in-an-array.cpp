#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,n,cnt;
    while(cin>>n)
    {
        ll a[n+1];
        for(i=0;i<n;i++){

            cin>>a[i];
        }
        sort(a,a+n);
        ll df,mx=10e9;
        for(i=0;i<n;i++){
            df=abs(a[i]-a[i+1]);
            if(df<mx){
                mx=df;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}

