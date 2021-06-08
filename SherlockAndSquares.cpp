#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,i,count=0,t,j;
	float x=0;
	
	cin>>t;
	for(j=0;j<t;j++)
	{
		
		cin>>a>>b;
		for(i=sqrt(a);i<=sqrt(b);i++)
		{
			if(i==ceil(i))
				count++;
		}
		cout<<count-1<<endl;
		count=0;
	}
	return 0;
}
