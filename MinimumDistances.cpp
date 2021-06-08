#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n,a[10001],i,j,k=0,b[100],vis[100]={0},low;
	
	cin>>n;
	
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j] && i!=j && (vis[i]!=1 && vis[j]!=1))
			{
				vis[i]=vis[j]=1;
				b[k]=abs(i-j);
				k++;
			}
		}
	}
	if(k==0)
		cout<<"-1"<<endl;
	else
	{
		low=b[0];
		for(i=1;i<k;i++)
		{
			if(low>b[i])
				low=b[i];
		}
		cout<<low<<endl;
	}
	
	return 0;
}
