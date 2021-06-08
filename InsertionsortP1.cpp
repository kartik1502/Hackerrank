#include<iostream>
using namespace std;
int main()
{
    int n,a[1001],i,temp,j;
    
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>a[i];
    temp=a[n-1];
    for(i=n-2;i>=0;i--)
    {
       if(a[i]>temp)
        {
            a[i+1]=a[i];
            
            for(j=0;j<n;j++)
                cout<<a[j]<<"\t";
            cout<<endl;
        }
        else 
        {
            a[i+1]=temp;
            for(j=0;j<n;j++)
                cout<<a[j]<<"\t";
            cout<<endl;
            break;
        }
       if(a[i]>temp && i==0)
       {
           a[i]=temp;
           for(j=0;j<n;j++)
                cout<<a[j]<<"\t";
            cout<<endl;
       }
    }
    return 0;
}


