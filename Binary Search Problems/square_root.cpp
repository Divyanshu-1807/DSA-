//#include<iostream>
//using namespace std;
//int square_root(int n)
//{   
//    int s,e,mid,ans;
//    s=0;
//    e=n;
//    mid=(s+e)/2;
//    while(s<=e)
//    {
//        if(mid*mid==n)
//        {
//            return mid;
//        }
//        if(mid*mid>n)
//        {
//            e=mid-1;
//        }
//        else
//        {
//            ans=mid;
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
//    cout<<square_root(n)<<endl;
//    return 0;
//}

#include<iostream>
using namespace std;
int square_root(int n)
{   
    int s,e,mid,ans;
    s=0;
    e=n;
    mid=(s+e)/2;
    while(s<=e)
    {
        if(mid*mid==n)
        {
            return mid;
        }
        if(mid*mid>n)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
double precision(int n,int temp,int res)
{
    double fig=1;
    double ans =temp;
    for(int i=0;i<res;i++)
    {
        fig=fig/10;
        for(double j=ans;j*j<n;j+=fig)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int temp= square_root(n);
    cout<<precision(n,temp,3)<<endl;
    return 0;
}