#include<iostream>
using namespace std;
int main()
{
    int i,r,c=0,j;

    for(i=1;i<100;i++)
    {
         int n=i*i;
        int m=n;
        j=0,c=0;
        int ar[4];
        while(n!=0)
        {
            r=n%10;
            ar[j]=r;
            c++;
            n=n/10;
            j++;
        }
        if(c==4)
        {

            if((ar[0]==ar[1])&&(ar[2]==ar[3]))
            {
                cout<<"Number is: "<<m;
                break;
            }
        }
    }
    return 0;
}
