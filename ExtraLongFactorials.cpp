#include<iostream>
using namespace std;
int factorial(int num)
{
	if(num==0)
		return 1;
	else
		return num*factorial(num-1);
}
int main()
{
	long long int result;
	int num;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	result=factorial(num);
	cout<<result<<endl;
	return 0;
}
