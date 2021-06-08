#include<iostream>
using namespace std;
int main()
{
	int n,c,m,Nc=0,Nw=0,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		
		cin>>n>>c>>m;
		Nc=n/c;
		Nw=Nc;
		while(Nw>1 && Nw>=m)
		{
			Nc++;
			Nw=Nw-m;
			Nw++;
		}
		cout<<Nc<<endl;
		Nc=0,Nw=0;
	}
	return 0;
}		
