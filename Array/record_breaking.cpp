#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            // cout<<"\ni: "<<i<<" a[i]: "<<arr[i];
            if(arr[0]>arr[1])
            cout<<"\nDay 1 is record breaking day"<<endl;
        }
        else if(i>0 && i<n-1)
        {   
            // cout<<"\ni: "<<i<<" a[i]: "<<arr[i];
            int temp=arr[i];
            int j=i-1;
            while(temp>arr[j] && j>=0)
            {
                // cout<<"\ni: "<<i<<" a[i]: "<<arr[i]<<" a[j]: "<<arr[j]<<" j: "<<j;
                j--;
            }
            if(j==-1 && temp>arr[i+1])
            {
                // cout<<" j==0 a[j]: "<<arr[i+1];
                cout<<"Day "<<(i+1)<<" is a record breaking day"<<endl;
            }
        }
        else if(i==(n-1))
        {   
            int j=i-1;
            while(arr[n-1]>arr[j] && j>=0)
            {
                // cout<<"\ni: "<<i<<" a[i]: "<<arr[i]<<" a[j]: "<<arr[j]<<" j: "<<j;
                j--;
            }
            if(j==-1)
            {
                cout<<"Day "<<(i+1)<<" is a record breaking day"<<endl;  
            }
        }
    }
    return 0;
}
