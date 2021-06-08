#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int l,r,c;
    string str;
    char str1[100][100];
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    str.erase(remove(str.begin(),str.end(),' '),str.end());
    l=str.length();
    r=floor(sqrt(l));
    c=ceil(sqrt(l));
    if(r*c<l)
    {
        if(r>c)
            c++;
        else
            r++;
    }
   
    int k=0,i=0,j=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            str1[i][j]=str[k];
            k++;
        }
    }
    
    str1[i][j]='\0';
    for(i=0;i<c;i++)
    {
        for(j=0;str1[j][i]!='\0';j++)
                cout<<str1[j][i];
        cout<<" ";
    }
    return 0;
}