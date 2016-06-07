#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
    ll i,t,N,cnt;
    cin>>t;
    while(t--)
    {
        cin>>N;
        if(N==1)
        {
            cout<<"Richard\n";
            return 0;
        }
        N-=1;
        cnt=0;
        while(N){
            N=N&(N-1);
            cnt++;
        }
        if(cnt%2)
            cout<<"Louise\n";
        else
            cout<<"Richard\n";
    }
    return 0;
}
