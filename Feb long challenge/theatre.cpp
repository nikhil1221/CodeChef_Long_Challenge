
#include <bits/stdc++.h>
using namespace std;
int a[4],b[4],c[4],d[4];

int main() {
    int t,n,s;
    int arr[4];
    long long final_ans=0;
    char x;
    cin>>t;
    for(int q=0;q<t;q++)
    {
            for(int j=0;j<4;j++)
            {
            a[j]=0;
            b[j]=0;
            c[j]=0;
            d[j]=0;
            }

        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x>>s;

            if(x=='A')
            {
                a[s/3-1]++;
            }
            if(x=='B')
            {
                b[s/3-1]++;
            }
            if(x=='C')
            {
                c[s/3-1]++;
            }
            if(x=='D')
            {
            d[s/3-1]++;
            }
        }
        long long int ans=-400;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(j!=i)
                for(int k=0;k<4;k++)
                {
                    if(k!=j&&k!=i)
                    for(int l=0;l<4;l++)
                    {
                        if(l!=k&&l!=j&&l!=i)
                         {
                            arr[0]=a[i];
                            arr[1]=b[j];
                            arr[2]=c[k];
                            arr[3]=d[l];
                            std::sort(arr,arr+4);
                            long long max;
                            max=25*arr[0]+50*arr[1]+75*arr[2]+100*arr[3];
                            int less=0;
                            if(a[i]==0)
                            less-=100;
                            if(b[j]==0)
                            less-=100;
                            if(c[k]==0)
                            less-=100;
                            if(d[l]==0)
                            less-=100;

                            max+=less;
                            if(ans<max)
                            ans=max;
                         }
                    }
                }
            }
        }
        final_ans+=ans;
        cout<<ans<<"\n";
    }
    cout<<final_ans<<"\n";
}
