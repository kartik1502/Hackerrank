#include<iostream>

using namespace std;
int main()
{
    string s;
    int count=0,i,n,x=0;
    
    getline(cin,s);
    for(i=0;s[i]!='\0';i++)
    {
        if(i%3==0 && s[i]=='S')
            count++;
        else if(i%3==2 && s[i]=='S')
            count++;
        else if(i%3==1 && s[i]=='O')
            count++;
            
    }
    cout<<s.length()-count<<endl;
    return 0;
}