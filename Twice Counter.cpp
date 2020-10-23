#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    op();
    int n,sum=0;

    cin>>n;
    map<string, int> m;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }

    int ans = 0;
    for(auto u:m)
    {
        if(u.second==2)
            ans++;
    }
    ans=0;
    return 0;
}


