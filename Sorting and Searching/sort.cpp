//------------------MERGE SORT-------------------------//
//#include<iostream>
//using namespace std;
//void merge(int arr[],int s,int mid,int e)
//{
//    int n1=mid-s+1;
//    int n2=e-mid;
//    int a1[n1];
//    int a2[n2];
//    for(int i=0;i<n1;i++)
//    {
//        a1[i]=arr[s+i];
//    }
//    for(int i=0;i<n1;i++)
//    {
//        a2[i]=arr[mid+i+1];
//    }
//    int i=0;
//    int j=0;
//    int k=s;
//    while(i<n1 && j<n2)
//    {  
//        
//        if(a1[i]<a2[j])
//        {
//            arr[k]=a1[i];
//            i++;
//            k++;
//        }
//        else
//        {
//            arr[k]=a2[j];
//            j++;
//            k++;
//        }
//    }
//    while(i<n1)
//    {
//        arr[k]=a1[i];
//            i++;
//            k++;
//    }
//    while(j<n2)
//    {
//        arr[k]=a2[j];
//            j++;
//            k++; 
//    }
//}
//void mergesort(int arr[],int s,int e)
//{
//    if(s<e)
//    {
//        int mid=(s+e)/2;
//        mergesort(arr,s,mid);
//        mergesort(arr,mid+1,e);
//        merge(arr,s,mid,e);
//    }   
//}
//int main()
//{
//    int arr[5]={5,4,3,2,1};
//    mergesort(arr,0,4);
//    for(int i=0;i<5;i++)
//    {
//        cout<<arr[i]<<"  ";
//    }
//return 0;
//}

//------------------QUICK SORT-------------------------//
//#include<iostream>
//using namespace std;
//int pivot(int arr[],int s,int e)
//{
//    int i=s;
//    int j=e;
//    int pivot=arr[s];
//    int temp;
//    while(i<j)
//    {
//        while(arr[i]<pivot)
//        i++;
//        while(arr[j]>pivot)
//        j--;
//        if(i<j)
//        {
//            temp=arr[i];
//            arr[i]=arr[j];
//            arr[j]=temp;
//        }
//    }
//    if(i>j)
//    {
//        temp=arr[s];
//        arr[s]=arr[j];
//        arr[j]=temp;
//    }
//    return j;
//}
//void quicksort(int arr[],int s,int e)
//{
//    if(s<e)
//    {
//        int pi=pivot(arr,s,e);
//        quicksort(arr,s,pi-1);
//        quicksort(arr,pi+1,e);
//    }   
//}
//int main()
//{
//    int arr[5]={5,4,3,2,1};
//    quicksort(arr,0,4);
//    for(int i=0;i<5;i++)
//    {
//        cout<<arr[i]<<"  ";
//   }
//return 0;
//}

//------------------COUNT SORT-------------------------//
//#include<iostream>
//using namespace std;
//void countsort(int arr[],int n)
//{
//    int k=arr[0];
//    for(int i=0;i<n;i++)
//    {
//        k=max(k,arr[i]);
//    }   
//
//    int count[20]={0};
//    for(int i=0;i<n;i++)
//    {
//        count[arr[i]]++;
//    }
//    for(int i=1;i<=k;i++)
//    {
//        count[i]+=count[i-1];   
//    }
//    int output[n];
//    for(int i=n-1;i>=0;i--)
//    {
//        output[--count[arr[i]]]=arr[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        arr[i]=output[i];
//    }
//
//}
//int main()
//{
//    int arr[]={1,3,2,3,4,1,6,4,3};
//    countsort(arr,9);
//    for(int i=0;i<9;i++)
//    {
//        cout<<arr[i]<<"  ";
//    }
//return 0;
//}

//--------------------DNF SORT----------------//
//#include<iostream>
//using namespace std;
//void dnfsort(int arr[],int n)
//{
//    int low=0;
//    int high=n-1;
//    int mid=0;
//    int temp;
//    while(mid<=high)
//    {
//        if(arr[mid]==0)
//        {
//            temp=arr[low];
//            arr[low]=arr[mid];
//            arr[mid]=temp;
//
//            low++;
//            mid++;
//        }
//        else if(arr[mid]==1)
//        {
//            mid++;
//        }
//        else
//        {
//            temp =arr[mid];
//            arr[mid]=arr[high];
//            arr[high]=temp;
//
//            high--;
//        }   
//    }
//}
//    int main()
//    {
//        int arr[]={1,0,2,1,0,1,2,1,2};
//        dnfsort(arr,9);
//        for(int i=0;i<9;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        return 0;  
//    }

//-----------------WAVE SORT-----------------//
//#include<iostream>
//using namespace std;
//void wavesort(int arr[],int n)
//{
//    for(int i=1;i<n;i+=2)
//    {
//        if(arr[i]>arr[i-1])
//        {
//            int temp=arr[i];
//            arr[i]=arr[i-1];
//            arr[i-1]=temp;
//        }
//         if(arr[i]>arr[i+1] && i<=n-2)
//        {
//            int temp=arr[i];
//            arr[i]=arr[i+1];
//            arr[i+1]=temp;
//        }
//    }
//}
//    int main()
//    {
//        int arr[]={1,3,4,7,5,6,2};
//        wavesort(arr,7);
//        for(int i=0;i<7;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        return 0;
//    }

//-----------------COUNT INVERSION-------------//
#include<iostream>
using namespace std;
int merge(int arr[],int s,int e,int mid)
{   
    long long inv=0;
    int n1=mid-s+1;
    int n2=e-mid;
    int a1[n1];
     int a2[n2];
    for(int i=0;i<n1;i++)
    {
        a1[i]=arr[s+i];
    }
    for(int i=0;i<n2;i++)
    {
        a2[i]=arr[i+mid+1];
    }
    int i=0;
    int j=0;
    int k=s;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            arr[k]=a1[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=a2[j];
            k++;
            j++;
            inv+=n1-i;
        } 
    }
    while(i<n1)
    {
         arr[k]=a1[i];
            k++;
            i++;
    }
    while(j<n2)
    {
        arr[k]=a2[j];
            k++;
            j++;
    }
    return inv;
}
long long mergesort(int arr[],int s,int e)
{   
    long long inv=0;
    if(s<e)
    {
        int mid=(s+e)/2;
        inv+=mergesort(arr,s,mid);
        inv+=mergesort(arr,mid+1,e);
        inv+=merge(arr,s,e,mid);
    }
    return inv;
}
int  main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<mergesort(arr,0,n-1)<<endl;
    return 0; 
}















