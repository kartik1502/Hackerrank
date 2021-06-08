#include<iostream>
using namespace std;
int main()
{
	int n;
	char b[101];
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	cout<<"Enter the string b"<<endl;
	for(i=0;i<n;i++)
		cin>>b[i];
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]='_')
			count++;
	}
	if(count==n)
		cout<<"Yes"<<endl;
	
