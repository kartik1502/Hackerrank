#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,count=0;
    string str;
    
    cin>>n;
    
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='U')
            x++;
        else if(str[i]=='D')
            x--;
        if(x==0 && str[i]=='U')
            count++;
    }
    cout<<count<<endl;
    return 0;
}