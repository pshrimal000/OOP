#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==0||num==1)
        return 1;
    else
        return num*fact(num-1);
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int fa=fact(n);
    cout<<fa;
    return 0;
}
