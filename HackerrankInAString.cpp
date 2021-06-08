#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int j=0,i,t,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
        string s="hackerrank";
    
        cin>>str;

        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]==s[j])
                j++;
        }
        if(j==s.length())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        j=0;
    }
    return 0;
}