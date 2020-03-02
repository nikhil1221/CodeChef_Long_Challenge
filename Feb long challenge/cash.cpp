
#include<bits/stdc++.h>
using namespace std;
long long int arr[100000];

int main()
{
    long long int n,k,t,ans;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        ans=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            ans+=arr[i];
            ans%=k;
        }
        cout<<ans<<"\n";
    }

}
