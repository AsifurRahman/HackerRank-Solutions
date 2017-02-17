#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,q;
    cin>>q;
    while(q--){
        j=0;
        string s,ss;
        ss="hackerrank";
        cin>>s;
        for(i=0;i<s.size();i++){
            if(s[i]==ss[j]){
                j++;
            }
        }
        if(j==ss.size())
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
