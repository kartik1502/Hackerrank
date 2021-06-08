#include<iostream>
using namespace std;
int main()
{
    int arr[1001],n,i,t,j,k;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>=0 && arr[j]>arr[i];j--)
        {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
        for(k=0;k<n;k++)
            cout<<arr[k]<<"\t";
        cout<<endl;
        
    }
    return 0;
}
