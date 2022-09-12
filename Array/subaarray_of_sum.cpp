#include<iostream>
using namespace std;
int  main(){
    int n,s;
    cout<<"enter no of elements of array:"<<endl;
    cin>>n;
    cout<<"elemnts of arrar----------"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter sum of subarray:"<<endl;
    cin>>s;
    int st=0;
    int sum=0;
    for(int i=st;i<n;i++)
    {
        sum=sum+arr[i];
        int en=i;
        while(sum>s)
        {
                sum=sum-arr[st];
                st++;
        }
        if(sum==s)
        {
            cout<<(st+1)<<endl;
            cout<<(en+1)<<endl;
            return 0;
        } 
    }
    cout<<"invalid sum"<<endl; 
    return 0;
}