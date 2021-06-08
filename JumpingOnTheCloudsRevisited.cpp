#include<iostream>
using namespace std;
int main()
{
    int n,k,a[26],e=100,i;
   
    cin>>n>>k;
   
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x=(0+k)%n;
    for(i=x;i!=0;i=(i+k)%n)
    {
        if(a[i]==0)
            e=e-1;
        else
            e=e-3;

    }
    if(a[i]==0)
        e=e-1;
    else
        e=e-3;
    cout<<e<<endl;
    return 0;

    
}