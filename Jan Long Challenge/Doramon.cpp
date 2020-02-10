#include <bits/stdc++.h>
using namespace std;

int main()
{
   long int n,m;
   int t;
   cin>>t;
   for(int f=0;f<t;f++)
   {
       int64_t count=0;
       cin>>n>>m;
       long int arr[n][m];
       for(int64_t i=0;i<n;i++)
       {
           for(int64_t j=0;j<m;j++)
           {
               cin>>arr[i][j];
           }
       }
       count=n*m;
       for(int i=1;i<=(n-2);i++)
       {
           for(int j=1;j<=(m-2);j++)
           {
               long long int k,min, x=n-i , y=m-j ,o;
               x--;
               y--;
               o=std::min(x,y);
               min=std::min(i,j);
               if(min>o)
               min=o;

               for(k=1;k<=min;k++)
               {
                   if((arr[i-k][j]==arr[i+k][j])&&(arr[i][j-k]==arr[i][j+k]))
                   {
                       count++;
                   }
                   else
                   {
                       break;

                   }
               }
           }
       }
       cout<<count<<"\n";
   }
}
