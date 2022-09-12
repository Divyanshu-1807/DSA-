//#include<iostream>
//using namespace std;
//int unique(int arr[],int n)
//{   
//    int XOR=0;
//    for(int i=0;i<n;i++)
//    {
//        XOR=XOR^arr[i];
//    }
//    cout<<XOR<<endl;
//    return 0;
//}
//int main()
//{
//      int i,n;
//    cin>>n;
//    int arr[n];
//    for(i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//    unique(arr,n);
//    return 0;
//}
//
//#include<iostream>
//using namespace std;
//int unique(int arr[],int n)
//{   
//    int XOR=0;
//    for(int i=0;i<n;i++)
//    {
//        XOR=XOR^arr[i];
//    }
//    //cout<<XOR<<endl;
//    int temp=XOR;
//    int setbit=0;
//    int pos=0;
//    while(setbit!=1)
//    {
//        setbit=XOR & 1;
//        pos++;
//        XOR=XOR >> 1;
//    }
//    //cout<<pos<<endl;
//    int new_xor=0;
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]  & (1<<(pos-1)))
//        {
//            new_xor=new_xor^arr[i];
//        }        
//    }
//       cout<<new_xor<<endl;
//       cout<<(temp^new_xor)<<endl;
//    return 0;
//}
//int main()
//{
//      int i,n;
//    cin>>n;
//    int arr[n];
//    for(i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//    unique(arr,n);
//    return 0;
//}

#include<iostream>
using namespace std;
int unique(int arr[],int n)
{   
    int res;
    for(int i=0;i<64;i++)
    {   
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j] & (1<<i))
            sum++;
        }
        if(sum!=0)
        {
            res=(1<<i);
            break;
        }
    }
    cout<<res<<endl;
    return 0;
}
int main()
{
      int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unique(arr,n);
    return 0;
}






























