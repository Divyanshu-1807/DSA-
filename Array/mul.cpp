#include<iostream>
using namespace std;
int main(){
int n,m,o;
cout<<"row col col: ";
cin>>n>>m>>o;
int a1[n][m];
int a2[m][o];
int multiply[n][o];
cout<<"enter elements of arr1------"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {
         cin>>a1[i][j];
    }
}
cout<<"array----------"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {
         cout<<a1[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"enter elements of arr2------"<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<o;j++)
    {
         cin>>a2[i][j];
    }
}
cout<<"array 2----------"<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<o;j++)
    {
         cout<<a2[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"multiplication matrix--------------"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<o;j++)
    {
        multiply[i][j]=0;
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<o;j++)
    {
        for(int k=0;k<m;k++)
        {
              multiply[i][j]+=a1[i][k]*a2[k][j];
        }  
    }

}
for(int i=0;i<n;i++)
{
    for(int j=0;j<o;j++)
    {
        cout<<multiply[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}