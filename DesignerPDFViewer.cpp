#include<iostream>
using namespace std;
int main()
{
	int h[26],x=0,i,j=0,a[10],high=0;
	char word[11];
	
	for(i=0;i<26;i++)
		cin>>h[i];
	
	cin>>word;
	for(i=0;word[i]!='\0';i++)
	{
		a[j++]=int(word[i])-97;
	}
	x=i;
	
	for(i=0;i<j;i++)
	{
		if(high<h[a[i]])
			high=h[a[i]];
	}
	
	cout<<high*x<<endl;
	return 0;
}
