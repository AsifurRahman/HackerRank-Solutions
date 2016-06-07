#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200],b[200];
int main()
{
    ll i,j,n,tc;
    string fs,ss;
    cin>>tc;
    while(tc--)
    {
        cin>>fs>>ss;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(i=0;i<fs.size();i++){
            if(a[fs[i]]==0)
                a[fs[i]]=1;
        }
        for(i=0;i<ss.size();i++){
            if(b[ss[i]]==0)
                b[ss[i]]=1;
        }
        bool sub=false;
        for(i='A';i<='Z';i++)
        {
            if(a[i]==1 && b[i]==1){
                sub=true;
                break;
            }
        }
        for(i='a';i<='z';i++)
        {
            if(a[i]==1 && b[i]==1){
                sub=true;
                break;
            }
        }
        cout<<(sub==true?"YES":"NO")<<endl;
    }
    return 0;
}
