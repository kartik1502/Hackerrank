#include<iostream>
using namespace std;
int main()
{
    char str[101][101];
    int n;
    cout<<"Enter the n"<<endl;
    cin>>n;
    int a[101][26]={0};
    cout<<"Enter the strings"<<endl;
    for(int i=0;i<n;i++)
        cin>>str[i];
    cout<<"The strings are"<<endl;
   for(int i=0;i<n;i++)
    {
        for(int j=0;str[i][j]!='\0';j++)
            a[i][str[i][j]-97]=1;
           
    }
    
for(int i=0;i<n;i++)
{
    for(int j=0;j<26;j++)
        cout<<a[j][i];
    cout<<endl;
}
    return 0;
}