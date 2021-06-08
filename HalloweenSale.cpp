#include<iostream>
using namespace std;
int main()
{
	int p,d,m,s,sum=0,count=0;
	
	cin>>p>>d>>m>>s;
	while(sum<=s)
	{
		if(m<=p)
		{
			sum=sum+p;
			p=p-d;
			count++;
		}
		else
		{
			sum=sum+m;
			count++;
		}
	}
	cout<<count-1<<endl;
	return 0;
}
