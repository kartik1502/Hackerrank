#include<iostream>
using namespace std;
int main()
{
    int n,d,m,s[101],sum=0,x=0,count=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>s[i];
    cout<<"Enter the value of d and m"<<endl;
    cin>>d>>m;
    for(int i=0;i<n;i++)
    {
        sum=sum+s[i];
        x++;
        if(x==m && sum==d)
        {
            count++;
            x=0;
            sum=0;
            i=i-(m-1);
        }
        else if(x==2)
        {
            sum=0;
            x=0;
            i=i-(m-1);
        }
    }
    cout<<count<<endl;
    return 0;
}