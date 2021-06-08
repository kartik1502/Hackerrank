#include<iostream>
using namespace std;
int main()
{
	string str,ptr,temp;
	int count=0,num,x,i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>str;
		num=stoi(str);
		for(int i=0;str[i]!='\0';i++)
		{
			if(str[i]!='0')		
			{
				ptr=str[i];
				x=stoi(ptr);
				if(num%x==0)
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}
