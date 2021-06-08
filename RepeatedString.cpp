#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long int n,i,count=0,x=0,y=0,z;
	string s,str;
	
	cin>>s;
	
	cin>>n;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a')
			y++;
	}
	if(s.length()==1 && s[0]=='a')
	{
		cout<<n<<endl;
		exit(0);
	}
	else if(s.length()==1)
	{
		cout<<"0"<<endl;
		exit(0);
	}
	while(str.length()<=n)
	{
		str.append(s);
		x++;
	}
	
	count=y*x;
	y=0;
	while(str.length()!=n)
	{
		z=str.length();
		if(str[z-1]=='a')
			y++;
		str.pop_back();	
	}
	count=count-y;
	cout<<count<<endl;
	return 0;
}
