#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        if(a+b+c<=s)
        {
            cout<<"1\n";
        }
        else
        if(a+b<=s||b+c<=s)
        {
            cout<<"2\n";
        }
        else
        {
            cout<<"3\n";
        }
    }
}
