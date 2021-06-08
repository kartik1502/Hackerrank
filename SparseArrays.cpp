#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,m,result[1001]={0};
   
    cin>>n;
    string str[n],str1,str2;
    
    for(int i=0;i<n;i++)
        cin>>str[i];
    
    cin>>q;
    string que[q];
    
    for(int i=0;i<q;i++)
        cin>>que[i];
    for(int i=0;i<q;i++)
    {
        str1=que[i];
        for(int j=0;j<n;j++)
        {
            str2=str[j];
            if(str1.compare(str2)==0)
                result[i]++;
        }
    }
    for(int i=0;i<q;i++)
        cout<<result[i]<<endl;
    return 0;
}