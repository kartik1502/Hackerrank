#include<iostream>
using namespace std;
int main()
{
	int n,p[100],i,j;
	
	cin>>n;
	
	for(i=1;i<=n;i++)
		cin>>p[i];
	for(i=1;i<=n;i++)
	{
		j=1;
		while(p[p[j]]!=i)
			j++;
		cout<<j<<endl;
	}
	return 0;
}
