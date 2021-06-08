#include<iostream>
using namespace std;
int main()
{
	int n,k,pos[100001],i,j,x=0,count=0;
	
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(abs(i-j)==k)
			{
				pos[x]=j;
				x++;
				count++;
			}
		}
	}
	if(count!=n)
		cout<<"-1"<<endl;
	else
	{
		for(i=0;i<x;i++)
			cout<<pos[i]<<endl;
	}
	return 0;
}
