#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,n,m,q;
    cin>>q;
    while(q--){
        scanf("%lld",&n);
        char s[n+1][n+1];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++){
                cin>>s[i][j];
            }
        }
        for(i=0;i<n;i++){
            sort(s[i],s[i]+n);
        }
        bool f=1;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n;j++){
                 if(s[i][j]>s[i+1][j]){
                    f=0;break;
                 }
            }
        }
        cout<<((f)?"YES":"NO")<<endl;

    }
    return 0;
}
