#include<iostream>
using namespace std;

int main()
{
	int n,a[1000],len,x=0,y=0,i=0,low=0,z=1;
	
	cin>>n;
	
	for(i=0;i<n;i++)
		cin>>a[i];
	while(1)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]!=0)
				x++;
		}
		if(x==0)
			break;
		
		cout<<x<<endl;
		x=0,low=a[0];
		for(i=1;i<n;i++)
		{
			if(low>a[i] && a[i]!=0)
				low=a[i];
			if(low==0)
				low=a[i];
		}
		len=low;
		for(i=0;i<n;i++)
		{
			if(a[i]!=0)
				a[i]=a[i]-len;
		}
		
	}
	
	
	return 0;
}		
