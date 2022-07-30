//BURGERS2
#include<iostream>
using namespace std;
int main()
{
    int t,x,y,n,r,a,b;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n>>r;
        if(x==y)
            cout<<"-1"<<endl;
        else
        {
            a=abs((n*y-r)/(y-x));
            b=abs((r-n*x)/(y-x));
            a<b?cout<<a<<" "<<b<<endl:cout<<b<<" "<<a<<endl;
        }
    }
}