#include<iostream>
using namespace std;
int main()
{
    int n,d;
    
    cin>>n>>d;
    int a[n];
   
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x=d%n,y=0;
    for(int i=x;y!=n;i=(i+1)%n)
    {
        cout<<a[i]<<" ";
        y++;
    }
    return 0;
}