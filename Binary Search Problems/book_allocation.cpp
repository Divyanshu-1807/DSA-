//#include<iostream>
//using namespace std;
//bool possible(int arr[],int n,int mid)
//{
//    int studentcount=1;
//    int pagesum=0;
//    for(int i=0;i<4;i++)
//    {
//        if(pagesum+arr[i]<=mid)
//        {
//            pagesum+=arr[i];
//        }
//        else
//        {
//            studentcount++;
//            if(studentcount > n || arr[i]>mid)
//            {
//                return false;
//            }
//            pagesum=arr[i];
//        }
//    }
//    return true;
//}
//int min_sum(int arr[],int n,int sum)
//{
//    int s=0;
//    int e=sum;
//    int mid=(s+e)/2;
//    int ans;
//    while(s<=e)
//    {
//        if(possible(arr,n,mid))
//        {
//            ans=mid;
//            e=mid-1;
//        }
//        else
//        {
//            s=mid+1;
//        }
//        mid=(s+e)/2;
//    }
//    return ans;
//}
//int main()
//{   
//    int n;
//    cin>>n; 
//    int arr[]={10,20,30,40};
//    int sum=0;
//    for(int i=0;i<4;i++)
//    {
//        sum+=arr[i];
//    }
//    cout<<min_sum(arr,n,sum)<<endl;
//    return 0;
// 
// 
// }
//
//#include<iostream>
//using namespace std;
//bool possible(int arr[],int n,int mid)
//{   
//    int sub=0;
//    int mx=0;
//    for(int i=0;i<5;i++)
//    {
//        for(int j=i+1;j<5;j++)
//        sub=abs(arr[i]-arr[j]);
//        if(sub>=mid)
//        {
//            return true;
//        }
//    }
//    return false;
//}
//int max_sub(int arr[],int n,int sub)
//{
//    int s=0;
//    int e=sub;
//    int mid=(s+e)/2;
//    int ans;
//    while(s<=e)
//    {
//        if(possible(arr,n,mid))
//        {
//            ans=mid;
//            s=mid+1;
//        }
//        else
//        {
//            e=mid-1;
//        }
//        mid=(s+e)/2;
//    }
//    return ans;
//}
//int main()
//{   
//    int n;
//    cin>>n; 
//    int arr[]={4,2,1,3,6};
//    int sub=0;
//    int mx=0;
//    for(int i=0;i<5;i++)
//    {
//        for(int j=i+1;j<5;j++)
//       {
//        sub=abs(arr[i]-arr[j]);
//        mx=max(sub,mx);
//       }
//    }
//    cout<<max_sub(arr,n,mx)<<endl;
//    return 0;
//}

#include<iostream>
using namespace std;
bool possible(int arr[],int n,int mid)
{
    int paintercount=1;
    int timesum=0;
    for(int i=0;i<4;i++)
    {
        if(timesum+arr[i]<=mid)
        {
            timesum+=arr[i];
        }
        else
        {
            paintercount++;
            if(paintercount > n || arr[i]>mid)
            {
                return false;
            }
            timesum=arr[i];
        }
    }
    return true;
}
int min_sum(int arr[],int n,int sum)
{
    int s=0;
    int e=sum;
    int mid=(s+e)/2;
    int ans;
    while(s<=e)
    {
        if(possible(arr,n,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main()
{   
    int n;
    cin>>n; 
    int arr[]={5,5,5,5};
    int sum=0;
    for(int i=0;i<4;i++)
    {
        sum+=arr[i];
    }
    cout<<min_sum(arr,n,sum)<<endl;
    return 0;
 
 
 }