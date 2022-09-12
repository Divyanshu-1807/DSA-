#include<iostream>
using namespace std;
int main(){
int n,m,num;
cin>>n>>m;
cout<<"enter the number to be searched"<<endl;
cin>>num;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {
         cin>>arr[i][j];
    }
}
cout<<"array----------"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {
         cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
int r=0 , c= m-1;
while(r<n && c>=0)
{
    if(arr[r][c]==num)
    {
    cout<<r<<" "<<c<<endl;
    cout<<"found"<<endl;
    return 0;
    }
    else if(arr[r][c]>num)
    c--;
    else
    r++;
}
cout<<"not found"<<endl;
return 0;
}