#include<iostream>
using namespace std;
int main()
{
    int n,t,height=0;
    cin>>t;
    while(--t)
    {
    
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            if(i%2==0)
                height++;
            else
                height=height*2;
        }
        cout<<height<<endl;
        height=0;
    }
    return 0;
}