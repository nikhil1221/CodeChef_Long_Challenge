#include<bits/stdc++.h>
using namespace std;
long int arr[100000];
int main()
{
     long int n,q,l,r,count_max,count_min;
     int max[100000],min[100000];
     cin>>n>>q;
     for(int i=1;i<=n;i++)
     {
         cin>>arr[i];
         max[i]=0;
         min[i]=0;
     }
     count_max=0;
     count_min=0;
     for(int i=1;i<=n;i++)
     {
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
            {
                count_max++;
            }
        else
             if(arr[i]<arr[i-1]&&arr[i]<arr[i+1])
             {
                 count_min++;
             }

                max[i]=count_max;
                min[i]=count_min;
     }
     for(int f=0;f<q;f++)
     {
         cin>>l>>r;
        count_max=0;
        count_min=0;
         count_min=abs(min[r-1]-min[l]);
         count_max=abs(max[r-1]-max[l]);

         int x=0;
         if(l+1==r||(count_max==0&&count_min==0))
         {
             cout<<"NO\n";
             x=1;
         }
         else
         if(l+2==r&&(count_max==1||count_min==1))
         {
             cout<<"YES\n";
             x=1;
         }
         if((arr[r]>arr[r-1]&&arr[r-2]>arr[r-1])||(arr[r-1]>arr[r-2]&&arr[r]>arr[r-1]))
         {
             count_max++;

         }
         if(((arr[r-1]>arr[r])&&(arr[r-1]>arr[r-2]))||((arr[r-2]>arr[r-1])&&(arr[r-1]>arr[r])))
         {
             count_min++;
         }
         if(count_min==count_max&&x==0)
         {
             cout<<"YES\n";
         }
         else
         if(x==0)
         {
             cout<<"NO\n";
         }
     }

}
