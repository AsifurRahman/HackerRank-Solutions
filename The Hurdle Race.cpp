#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,n,m,x;
    while(cin>>n>>x){
            ll v=x;
        for(i=0;i<n;i++){
            cin>>m;
            v=max(v,m);
        }
    cout<<v-x<<endl;
    }
    return 0;
}
