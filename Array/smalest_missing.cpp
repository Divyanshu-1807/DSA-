#include<iostream>
using namespace std;
int  main(){
    int n,i;
    cout<<"enter no of elements of array:"<<endl;
    cin>>n;
    cout<<"elemnts of arrar----------"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // int ch=0;
    // for(i=0;i<n;i++)
    // {
    //     if(ch==arr[i])
    //     {
    //         ch++;
    //         i=0;
    //     }
    // }
    // if(i==n)
    // {
    //     cout<<ch<<endl;
    // }
    // int i;
    int ch=1;
    // int n=arr.size();
    for(i=0;i<n;i++)
    {
        cout<<"\nch: "<<ch<<" arr[i]: "<<arr[i]<<" i: "<<i;
        if(ch==arr[i])
        {
            ch++;
            i=-1;
        }
        cout<<"\nch: "<<ch<<" arr[i]: "<<arr[i]<<" i: "<<i;
        cout<<"\n-----\n";
    }
    
        return ch;
    return 0;   
}
