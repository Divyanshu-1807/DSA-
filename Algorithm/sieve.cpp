//#include<iostream>
//using namespace std;
//int prime(int n)
//{
//    int arr[100]={0};
//    for(int i=2;i<=n;i++)
//    {
//        if(arr[i]==0)
//        {
//            for(int j=i*i;j<=n;j+=i)
//            {
//                arr[j]=1;
//            }
//        }
//    }
//    for(int i=2;i<=n;i++)
//    {
//        if(arr[i]==0)
//        cout<<i<<endl;
//    }    
//    return 0;
//}
//int main()
//{
//    int n;
//    cin>>n;
//    prime(n);
//    return 0;
//}

#include<iostream>
using namespace std;
int prime_factors(int n)
{
    int arr[100]={0};
    for(int i=2;i<=n;i++)
    {
        arr[i]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(arr[j]==j)
                {
                    arr[j]=i;
                }
            }
        }
    }
    while(n!=1)
    {   
        cout<<arr[n]<<endl;
        n=n/arr[n];
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    prime_factors(n);
    return 0;
}