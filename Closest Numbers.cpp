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
	while(cin>>n){
		ll a[n+1];
		vector<pair<ll,ll> >vp;

		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);

		ll lowest_dff=1e8;
		for(i=0;i<n-1;i++){

			ll dff=abs(a[i+1]-a[i]);

			if(dff==lowest_dff){
				vp.pb(make_pair(a[i],a[i+1]));
			}

			else if(dff<lowest_dff){
				lowest_dff=dff;
				vp.clear();
				vp.pb(mp(a[i],a[i+1]));
			}
		}
		for(i=0;i<vp.size();i++){
			cout<<vp[i].first<<" "<<vp[i].second<<" ";
		}
		cout<<endl;
	}
	return 0;
}




























