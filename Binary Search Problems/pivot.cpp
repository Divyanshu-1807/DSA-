#include<iostream>
using namespace std;
int pivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}
int search(int arr[],int n,int key)
{   
    int s,e,mid;
    int p=pivot(arr,n);
    if(key>=arr[0])
    {
        s=0;
        e=p-1;
        mid=(s+e)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return -1;
    }
    else
    {
        s=p;
        e=n-1;
        mid=(s+e)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return -1;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<search(arr,n,key)<<endl;
    return 0;
}

