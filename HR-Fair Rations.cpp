#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n;
    while(cin>>n){
        long long a[n+1],cnt=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++){
            if(a[i]%2==1)
                {
                    a[i]+=1;
                    a[i+1]+=1;
                    cnt+=2;
                }
        }
        bool f=1;
        for(i=0;i<n;i++){
            if(a[i]%2==1)
            {
                f=0;
                break;
            }
        }
        if(f==1)
            cout<<cnt<<endl;
        else
            cout<<"NO\n";
    }
    return 0;
}
