//#include<iostream>
//using namespace std;
//void replace(string s)
//{
//    if(s.length()==0)
//    {
//        return;
//    }
//    if (s[0]=='p' && s[1]=='i')
//    {
//      cout<<"3.14";
//      replace(s.substr(2));
//    }
//    else
//    {
//        cout<<s[0];
//        replace(s.substr(1));
//    } 
//}
//int main()
//{
//    string s ="pippxxppiixipi";
//    replace(s);
//    return 0;
//}

//#include<iostream>
//using namespace std;
//string remove(string s)
//{
//    if(s.length()==0)
//    {
//        return "";
//    }
//    char ch=s[0];
//    string ros= remove(s.substr(1));
//    if(ch==ros[0])
//    {
//        return ros;
//    }
//    else
//    {
//        return ch+ros;
//    }
//}
//int main()
//{
//    string s ="aaabbbccccddddeee";
//    cout<<remove(s)<<endl;
//    return 0;
//}

//
//#include<iostream>
//using namespace std;
//string remove(string s)
//{
//    if(s.length()==0)
//    {
//        return "";
//    }
//    char ch=s[0];
//    string ros= remove(s.substr(1));
//    if(ch=='x')
//    {
//        return ros+ch;
//    }
//    else
//    {
//        return ch+ros;
//    }
//}
//int main()
//{
//    string s ="axbcxefxx";
//    cout<<remove(s)<<endl;
//    return 0;
//}
//


#include<iostream>
using namespace std;
string substr(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ros=substr(s.substr(1));
    cout<<ch<<endl;
    cout<<ch+ros<<endl;
    return(ch+ros);

}
int main()
{
    string s ="abc";
    substr(s);
    return 0;
}