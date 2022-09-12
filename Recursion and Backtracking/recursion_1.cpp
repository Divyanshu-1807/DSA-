//#include<iostream>
//using namespace std;
//bool sorted(int arr[],int n)
//{
//    if(n==1)
//    return true;
//    bool restarray = sorted(arr+1,n-1);
//    return (arr[0]<arr[1]&&restarray);
//}
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//    cout<<sorted(arr,n)<<endl;
//    return 0;
//}


#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    
    return fibo(n-1)+fibo(n-2);
    
}
int main()
{
    int n;
    cin>>n;
    
    
    return 0;
}



























