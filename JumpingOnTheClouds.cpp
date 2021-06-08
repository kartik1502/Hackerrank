#include<iostream>
using namespace std;
int main()
{
    int n,c[100],a[100],j=0,b[100]={0},k=0,count=0;
  
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=0;i<n;i++)
    {
        if(c[i]==0)
        {
            a[j]=i;
            j++;
        }
    }
    for(int i=0;i<j;i++)
    {
        if(i!=0)
        {
            b[k]=a[i]-a[i-1];
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        if(b[i]==1 && b[i+1]==1)
        {
            b[i]=2;
            b[i+1]=0;
        }
    }
    for(int i=0;i<k;i++)
    {
        if(b[i]==1 || b[i]==2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}