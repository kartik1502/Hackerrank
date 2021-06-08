#include<iostream>
#include<string>
using namespace std;
int main()
{
	char grid[100][100];
	int n,i,j;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cin>>grid[i][j];
	}
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if((grid[i][j-1]<grid[i][j] && grid[i][j+1]<grid[i][j]) && (grid[i-1][j]<grid[i][j] && grid[i+1][j]))
				grid[i][j]='x';
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<grid[i][j];
		cout<<endl;
	}
	return 0;
}
