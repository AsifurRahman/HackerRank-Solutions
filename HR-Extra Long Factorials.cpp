
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,j,len,a[10000]={0};
    while(cin>>n){
        a[0]=1;
        len=1;
        ll mul,dig,carry=0;
        for(i=2;i<=n;i++){
            for(j=0;j<len;j++){
                mul=a[j]*i+carry;
                dig=mul%10;
                a[j]=dig;
                carry=mul/10;
            }
            while(carry){
                len++;
                dig=carry%10;
                a[len-1]=dig;
                carry=carry/10;
            }
        }
        for(i=len-1;i>=0;i--){
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
