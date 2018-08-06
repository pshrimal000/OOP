#include<iostream>
using namespace std;
int main()
{
    int num,c=0,r;
    cout<<"Enter a number"<<endl;
    cin>>num;
    while(num!=0)
    {
        r=num%10;
        c++;
        num=num/10;
    }
    cout<<"Number of digits is :"<<c;
    return 0;
}
