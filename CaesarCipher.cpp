#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s[101];
	int n,k,x,i;
	string str,y;
	
	cin>>n>>k;
	
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		if(int(s[i])>=97 && int(s[i])<=122)
		{
			k=k%26;
			x=int(s[i])+k;
			if(x>122)
				x=x-26;
			y=char(x);
			str.append(y);
		}
		else if(int(s[i])>=65 && int(s[i])<=90)
		{
			k=k%26;
			x=int(s[i])+k;
			if(x>90)
				x=x-26;
			y=char(x);
			str.append(y);
		}
		else
		{
			y=s[i];
			str.append(y);
		}
	}
	cout<<str<<endl;
	return 0;
}
