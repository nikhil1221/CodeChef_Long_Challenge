#include<bits/stdc++.h>
#include<math.h>
#include <cstdint>
using namespace std;

int main()
{
    int t;
    int64_t a,b,c,d,e,f,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int64_t s=0;
       cin>>n>>a;
       s=(2*pow(10,n));
       cout<<s+a<<endl;
       cin>>b;
       c=pow(10,n);
       cout<<c-b<<endl;
       cin>>d;
       e=pow(10,n);
       cout<<e-d<<endl;
       cin>>f;
       if(f==-1)
       break;
    }
}
