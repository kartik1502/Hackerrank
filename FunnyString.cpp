#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,r;
    int flag=0,t;
    cin>>t;
    while(--t)
    {
        getline(cin,str);
        r=str;
        reverse(r.begin(),r.end());
        for(int i=0;i<str.size()-1;i++)
        {
            if(abs(str[i]-str[i+1])!=abs(r[i]-r[i+1]))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"Not Funny"<<endl;
        else
            cout<<"Funny"<<endl;
        flag=0;
    }
    return 0;
}