#include<iostream>
using namespace std;
int main()
{
    char ch[100];
    cout<<"Enter a string\n"<<endl;
    cin>>ch;
    int i;
    for(i=0;ch[i]!='\0';i++);
    cout<<i;
}
