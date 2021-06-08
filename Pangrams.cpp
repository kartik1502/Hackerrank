#include<iostream>
using namespace std;
int main()
{
    int i,flag=0,vis[30]={0},count=0,n,x;
    char s[50];
    
   
    gets(s);
    
    for(i=0;s[i]!='\0';i++)
    {
        x=int(s[i]);
        if(x==32) 
            continue;
        if(x>=97 && x<=122)
            vis[x-97]=1;
        else if(x>=65 && x<=90) 
            vis[x-65]=1;
    }
    for(i=0;i<26;i++)
    {
        if(vis[i]==1)
            count++;
    }
    cout<<count<<endl;
    if(count==26)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;
    return 0;
}