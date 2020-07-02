#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define inf INT_MAX

#define ff first
#define ss second

#define ll  long long int
#define pii pair<ll, ll>
#define vi  vector<ll>


ll n;
ll v[300005];

ll check(ll mid){
    ll ans=0;
    for (int i = 0; i < n; ++i) {
        if(v[i]>mid)
            return -1;
        else
            ans += mid-v[i];
    }
    return ans;
}

int main() { 
    sync;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }

    ll s=0;
    ll e=inf;
    while(s+1<e){
        ll mid=s+e>>1;
        if(check(mid) < mid)
            s=mid;
        else
            e=mid;
    }
    cout<<e;

    return 0;
}