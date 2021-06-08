#include<iostream>
using namespace std;
int main()
{
    int n,t,width[100001],cases[1001][2],x=0,y=0;
    
    cin>>n>>t;
    
    for(int i=0;i<n;i++)
        cin>>width[i];
    
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>cases[i][j];
    
            if(j==0)
                x=cases[i][j];
            else
                y=cases[i][j];
        }
       
        int low=width[x];
        for(int k=x;k<=y;k++)
        {
            if(width[k]<low)
                low=width[k];
        }
        cout<<low<<endl;
    }
    return 0;
}