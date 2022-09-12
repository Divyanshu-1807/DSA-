//#include<iostream>
//using namespace std;
//bool check(int n){
//return ( n && !(n & n-1));
//}
//int main()
//{
//    int n;
//    cin>>n;
//    check(n);
//    if(check(n)==1)
//    {
//        cout<<"it is power of 2"<<endl;
//    }
//    else
//    {
//        cout<<"it is not power of 2"<<endl;
//    }
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int count(int n)
//{
//    int count=0;
//    while(n!=0)
//    {
//        n=n & n-1;
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int n;
//    cin>>n;
//    cout<<count(n)<<endl;
//    return 0;
//}

#include<iostream>
using namespace std;
int sub_arr(int arr[],int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
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
    sub_arr(arr,n);
    return 0;
}