#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int p,q,n,m,num1=0,num2=0;
    string str;
    char str1[1000],str2[100];
    cout<<"Enter the value of p and q"<<endl;
    cin>>p>>q;
    for(int i=p;i<=q;i++)
    {
        n=i*i;
        str=to_string(n);
        m=str.size();
        p=m-m/2;
        if(m==1 && n==i)
            cout<<i<<endl;
       else
       {
            str.copy(str1,m/2,0);
            str.copy(str2,p,m/2);
            num1=stoi(str1);
            num2=stoi(str2);
            cout<<num1<<" "<<num2<<endl;
            if(num1+num2==i)
                cout<<i<<endl;
       }
       num1=0,num2=0;
    }
    return 0;

}
