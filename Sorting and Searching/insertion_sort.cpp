#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {   
        int temp=arr[i];    
        for(j=i-1;j>=0;j--)
        {
         if(temp<arr[j])
         {
            arr[j+1]=arr[j];
         }
         else
         {
            break;
         }               
        }
        arr[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

