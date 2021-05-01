/*
Paste the below link in your browser for question:
https://codeforces.com/contest/1513/problem/B
*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
long long mod=1e9+7;

void solve()
{
    ll n; cin>>n;
    ll a[n];
    ll res;
    unordered_map <int,int> m;
    cin>>a[0];
    res=a[0];
    m[a[0]]++;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        res=res&a[i];
        m[a[i]]++;
    }

    if(m[res]<2)
    {
        cout<<0<<"\n";
        return;
    }

    ll ans=(m[res]%mod);
    ans=(ans*((m[res]-1)%mod))%mod;
    for(int i=1;i<=n-2;i++)
    {
        ans=(ans*(i%mod))%mod;
    }

    cout<<ans<<"\n";
    return;
}

int main()
{
    fast;
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
