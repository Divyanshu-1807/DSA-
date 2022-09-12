#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i =0; i <n; i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int ans;
    while(i<n-1)
    {   
        int mini=INT_MAX;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<mini)
            {
            mini=arr[j];
            ans=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[ans];
        arr[ans]=temp;
        i++;
    }
    for (int i =0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
