#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//void subst(string s,string ans)
//{
//    if(s.length()==0)
//    {
//        cout<<ans<<endl;
//        return;
//    }
//    char ch=s[0];
//    int num = ch;
//    string ros = s.substr(1);
//    subst(ros,ans+to_string(num));
//    subst(ros,ans+ch);
//    subst(ros,ans);
//}
//int main()
//{
//    subst("AB","");
//    return 0;
//}

int main()
{
    char s1[20],s2[20];
    int i,j;
    printf("enter a string ");
    scanf("%s",&s1);
    printf("enter a substring ");
    scanf("%s",&s2);
    int flag=0;
    for( i=0;i<strlen(s1);i++)
    {   int z=i;
        if(s1[i]==s2[0])
        {
            for(j=0;j<strlen(s2);j++)
            {
                if(s1[i]==s2[j])
                i++;
            }
            if(j==strlen(s2))
            {
                flag=1;
                break;
            }
            i=z;
        }
    }
    if(flag==0)
    {
        printf("unsuccessful");
    }
    else{
             printf("found");
    }
    return 0;
}