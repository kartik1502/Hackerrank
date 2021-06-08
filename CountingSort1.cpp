#include<iostream>
using namespace std;
int main()
{
    int n,a[100001],result[100]={0};
   
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        result[a[i]]++;
    }
    for(int i=0;i<100;i++)
        cout<<result[i]<<" ";
    return 0;
}