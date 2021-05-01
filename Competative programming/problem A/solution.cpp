/*
Paste the below link in your browser for question:
https://codeforces.com/contest/1513/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

void solve()
{
    int n,k; cin>>n>>k;
    int check;

    if(n%2==0)
    {
        check=n/2-1;
    }
    else{
        check=n/2;
    }
    if(k>check)
    {
        cout<<-1<<"\n";
        return;
    }

    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        v[i]=i+1;
    }
    int j=n-2;
    while(k>0)
    {
        swap(v[j],v[j+1]);
        j=j-2;
        k--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";


}

int main()
{
    fast;
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
