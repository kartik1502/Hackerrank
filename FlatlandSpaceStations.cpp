#include<iostream>
using namespace std;
int main()
{
	int n,c[10001],m,y=0,k=0,x,low,a[10001],min[10000],i,j;
	
	cin>>n>>m;
	if(n==m)
	{
		cout<<"0"<<endl;
		exit(0);
	}
	
	for(i=0;i<m;i++)
		cin>>c[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			a[k++]=abs(i-c[j]);
		low=a[0];
		for(x=1;x<k;x++)
		{	
			if(low>a[x])
				low=a[x];
		}
		k=0;
		min[y++]=low;
	}
	
	low=0;
	for(i=0;i<y;i++)
	{
		if(low<min[i])
			low=min[i];
	}
	cout<<low<<endl;
	return 0;
}
	
