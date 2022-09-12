#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
cin.ignore();
char arr[n+1];
cin.getline(arr,n+1);
// cin.ignore();
// cout<<"----";
// cout<<arr[n-1];
int i=0;
int len=0;
int mx=0;
int st=0;
int max_st=0;
while (1)
{   
    if(arr[i]==' ' || arr[i]=='\0')
    {   
        if(len>mx)
        {
        mx=len;
        max_st=st;
        }
        len=0;
        st=i+1;
    }
    else
    {
        len++;
    }
    if(arr[i]=='\0')
    {
        break;
    }
    i++;
}
cout<<mx<<endl;
i=max_st;
while(arr[i]!=' ' && arr[i]!='\0')
{   
    cout<<arr[i];
    i++;
}
return 0;
}
















