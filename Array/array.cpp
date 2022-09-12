#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=INT_MAX;
    int temp=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
             temp=i;
            }
        }
          ans=min(ans,temp);
    }
        cout<<(ans+1)<<endl;
    return 0;

}

