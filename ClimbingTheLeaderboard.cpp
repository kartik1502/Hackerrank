#include<iostream>
using namespace std;
int main()
{
	unsigned long long ranked[200007],player[200005],n,m,a[200005],i,j;
	cout<<"Enter the value of n,m"<<endl;
	cin>>n>>m;
	cout<<"Enter the ranked array"<<endl;
	for(i=0;i<n;i++)
		cin>>ranked[i];
	cout<<"Enter the player array"<<endl;
	for(i=0;i<m;i++)
		cin>>player[i];
	a[0]=1;
	for(i=1;i<n;i++)
	{
		if(ranked[i-1]==ranked[i])
			a[i]=a[i-1];
		else
			a[i]=a[i-1]+1;
	}
	int x,k=0;
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			if(i==n-1)
				cout<<a[n]+1;
			else if(ranked[i]==player[j])
				cout<<a[k++]<<endl;
			else if(ranked[i]<player[j])
				cout<<a[k++]<<endl;
		}
	}
	return 0;
}
			
