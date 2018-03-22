///****Bismillahir Rahmanir Rahim*****///
///** AR_ASIF(Asifur Rahman),MBSTU **///
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(auto i=0; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sf(x) scanf("%lld",&x)
#define sqr(x) ((x)*(x))
#define pb push_back
#define ll long long
#define mp make_pair
#define clr clear()
#define inf (1<<30)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<ll> vi;
typedef vector<st> vs;
typedef map<ll,ll> mii;
typedef map<string,ll> msi;
typedef set<ll> si;
typedef set<string> ss;
typedef pair<ll,ll> pii;
typedef vector<pii> vpii;
int main()
{
    ll t,cs,n,m,ans,i;
    stack<char>ss;
    string s;
    while(cin>>s)
    {
        ss.push(s[0]);
        for(i=1; i<s.size(); i++)
        {
            if(s[i]==ss.top())
            {
            	ss.pop();
            	if(ss.empty()&& i+1<s.size()){
            	     ss.push(s[i+1]);
                     i=i+1;
            	}
            }
            else
            {
                ss.push(s[i]);
            }

        }
        s="";
        while(!ss.empty())
        {
            s+=ss.top();
            ss.pop();
        }
        reverse(s.begin(),s.end());
        if(s.size())
            cout<<s<<endl;
        else
            cout<<"Empty String\n";
    }

    return 0;
}

