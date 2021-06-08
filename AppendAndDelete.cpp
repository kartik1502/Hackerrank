#include<iostream>
#include<string>

using namespace std;
int main()
{
	
	int k,i,j,x=0,y=0,z=0;
	string a,s;
	string t;
	char m;
	cout<<"Enter the string s"<<endl;
	cin>>s;
	cout<<"Enter the string t"<<endl;
	cin>>t;
	cin>>k;
	j=0;
	for(i=0;(s[i]!='\0' || t[j]!='\0');i++)
	{
		if(s[i]!=t[j])
		{
			x=i;
			break;
		}
		else
			x=0;
		j++;
	}
	if(x==0)
	{
		y=t.length();
		if(k>=y)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	else
	{
		for(i=x;s[i]!='\0';i++)
		{
			if(z<=k)
			{
				s.pop_back();
				z++;
			}
		}
		for(i=x;t[i]!='\0';i++)
		{	
			if(z<=k)
			{
				m=t[i];
				s.append(1,m);
				z++;
			}
		}
	}
	cout<<"S:"<<s<<"\t"<<"T:"<<t<<endl;
	return 0;
}
