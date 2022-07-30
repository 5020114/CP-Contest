
#include<iostream>
using namespace std;
int main()
{
    int t,a,b,n,temp,i=1;
    cin>>n;
    while(t--)
    {
        cin>>a>>b>>n;
        if(a==0)
            cout<<"-1"<<endl;
        else if(b==0)
        {
            if(n%a==0)
                cout<<n<<endl;
            else
            {
                res=n/a;
                cout<<a*(res+1)<<endl;
            }
        }
        else if(b%a==0 || a%b==0)
            cout<<"-1"<<endl;
        else
        {
            if(n==0)
                cout<<a<<endl;
            else if(n%a==0 && n%b!=0)
                cout<<n<<endl;
            else
            {
                temp=n/a;
                while(i)
                {
                    if(a*(temp+i)%b!=0)
                    {
                        cout<<a*(temp+i)<<endl;
                        break;
                    }
                    i++;
                }
            }
        }
        res=0,temp=0;
    }
}