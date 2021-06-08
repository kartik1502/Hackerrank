#include<iostream>
using namespace std;
int main()
{
	int a[101],x,p,pg=0,count=0,k,i,n;
	cout<<"Enter the value of n and k"<<endl;
	cin>>n>>k;
	cout<<"Enter the array"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		p=1,pg++,x=1;
		while(p<=a[i] && x<=k)
		{
			if(p==pg)
			{
				cout<<p<<"\t"<<pg<<endl;
				count++,x++,p++;
				cout<<x<<endl;
			}
			
			else
				x++,p++;
			if(x>k)
				x=1,pg++;
		}
	}
	cout<<count<<endl;
	return 0;
}
