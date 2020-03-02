//Only one part of the contest is solved at that time


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    long long t,x,y;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        cin>>a>>x;
        cin>>b>>y;
        long long int i;
        if(a<=2)
        i=x;
        else
        i=x+1;

      if(y>9000)
      {
          y=9000;
      }
      if(b>1)
        y++;
        long long int count=0,f;
        for(;i<y;i++)
        {
            long long int c=i/100;
            long long int s=c/4;
            long long int d,x;
                d=((i%100)-1)/4;
                f=32+(i%100)-1+d+s-(2*c);
                if(f<0)
                x=f+7*((f/7)+1);
                else
                x=f%7;
            if(i%400==0||(i%4==0&&i%100!=0))
            {

                if(x==6)
                {
                    count++;
                }
            }
            else
            {
                if(x==6||x==0)
                {

                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }


}
