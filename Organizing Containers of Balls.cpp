#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[101][101],R[101],C[101];
int main()
{
    ll i,n,j,cs,q;
    cin>>q;
    for(cs=1; cs<=q; cs++)
    {
        cin>>n;
        memset(R,0,sizeof R);
        memset(C,0,sizeof C);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                R[i]+=a[i][j];
                C[j]+=a[i][j];
            }
        }
        bool f=1;
        sort(R,R+n);
        sort(C,C+n);
        for(i=0; i<n; i++)
        {
            if(C[i]!=R[i])
            {
                f=0;
                break;
            }
        }
        if(f==0)
            cout<<"Impossible\n";
        else
            cout<<"Possible\n";
    }
    return 0;
}

