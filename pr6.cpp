#include<iostream>
using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    cin>>str1>>str2;
    int l1,l2,i,j;
    for(l1=0;str1[l1]!='\0';l1++);
    for(l2=0;str2[l2]!='\0';l2++);
    for(i=0;i<l2;i++)
    {
        *(str1+l1)=*(str2+i);
        l1++;
    }
    cout<<str1;
    return 0;
}
