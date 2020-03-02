
#include <iostream>
using namespace std;
int main() {
    long long arr[1000],p;
    long long t,n;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        int flag=0;
        cin>>n>>p;
        int i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(p%arr[i]!=0)
            break;
        }

        if(i!=n)
        {

            flag=1;
            cout<<"YES ";
            long long x=i;
            for(i=0;i<n;i++)
            {
                if(x==i)
                {
                    long long ans=(p/arr[x])+1;
                    cout<<ans<<" ";
                }
                else
                {
                    cout<<"0 ";
                }
            }
            cout<<"\n";
        }

        int indexa=-1,indexb=-1;
        if(flag!=1)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(arr[k]%arr[j]!=0)
                    {
                        indexb=k;
                        indexa=j;

                        break;
                    }
                }
            }
            if(indexa!=-1)
            {
                cout<<"YES ";
            for(i=0;i<n;i++)
            {

                long long ansb=(p/arr[indexb])-1;
                long long ansa=(p-ansb*arr[indexb])/arr[indexa]+1;
                if(indexb==i)
                {
                    cout<<ansb<<" ";
                }
                else
                if(indexa==i)
                {
                    cout<<ansa<<" ";
                }
                else
                {
                    cout<<"0 ";
                }
            }
            cout<<"\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}
