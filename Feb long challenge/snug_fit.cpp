#include<bits/stdc++.h>
using namespace std;
long long a[10000],b[10000];

int main()
{
    long t,n;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        std::sort(a,a+n);
        std::sort(b,b+n);
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=std::min(a[i],b[i]);
        }
        cout<<ans<<"\n";
    }
}
