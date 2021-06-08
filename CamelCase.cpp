#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int i,count=1;
	
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		if(int(s[i])>=65 && int(s[i])<=90)
			count++;
	}
	cout<<count<<endl;
	return 0;
}
