//Kidnap problem//

#include<iostream>
using namespace std;
int kidnap(int w[],int v[],int n,int W)
{
    if(n==0 || W==0)
    {
        return 0;
    }
    if(w[n-1]>W)
    {
        return kidnap(w,v,n-1,W);
    }
    return max(kidnap(w,v,n-1,W-w[n-1])+v[n-1],kidnap(w,v,n-1,W));
    
    
}
int main()
{   
    int w[]={10,20,30};
    int v[]={100,50,150};
    int W=50;
    cout<<kidnap(w,v,3,W)<<endl;
    return 0;
}