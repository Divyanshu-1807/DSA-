#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
char arr[n+1];
cin>>arr;
int i=0;
int flag=0;
while(arr[i]!='\0')
{
    if(arr[i]!=arr[n-i-1])
    {
        flag=1;
        break;
    }
    i++;
}
if(flag==0)
{
    cout<<"palindrome"<<endl;
}
else
{
    cout<<"Not palindrome"<<endl;
}
return 0;
}
