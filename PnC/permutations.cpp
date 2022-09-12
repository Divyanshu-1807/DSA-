//#include<iostream> 
//using namespace std;
//void permutations(string s , string ans)
//{
//    if(s.length()==0)
//    {
//        cout<<ans<<endl;
//        return;
//    }
//    for(int i=0;i<s.length();i++)
//    {
//        char ch=s[i];
//        string ros=s.substr(0,i)+s.substr(i+1);
//        permutations(ros,ans+ch);
//    }
//}
//int main()
//{
//    permutations("ABC","");
//    return 0;
//}

//#include<iostream> 
//using namespace std;
//int permutations(int s,int e)
//{
//    if(s==e)
//    {
//        return 1;
//    }
//    if (s>e)
//    {
//        return 0;
//    }
//    int count=0;
//    for(int i=1;i<=6;i++)
//    {
//       count+=permutations(s+i,e);
//    }
//    return count;
//}
//int main()
//{
//    cout<<permutations(0,3)<<endl;
//    return 0;
//}

//#include<iostream> 
//using namespace std;
//int permutations(int n,int i,int j)
//{
//    if(i==n-1 && j==n-1)
//    {
//        return 1;
//    }
//    if (i>=n || j>=n)
//    {
//        return 0;
//    }
//    return permutations(n,i+1,j) + permutations(n,i,j+1);
//}
//int main()
//{
//    cout<<permutations(3,0,0)<<endl;
//    return 0;
//}

 #include<iostream> 
using namespace std;
int permutations(int s ,int e)
{
    if(s==e)
    {
        return 1;
    }
    if (s>e)
    {
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++)
    {
       count+=permutations(s+i,e);
    }
    return count;
}
int main()
{
    cout<<permutations(0,3)<<endl;
    return 0;
}