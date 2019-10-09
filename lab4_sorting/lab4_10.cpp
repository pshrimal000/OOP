#include <bits/stdc++.h>
#include "rdm.h"
using namespace std;
int main()
{
    int n,i,j,d;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int ar[n+1];
    srand(time(NULL));
    rdm(ar,n);
    cout<<endl;
    for(i=1;i<n;i++)
    {
        d=ar[i];
        j=i-1;
        while(j>=0&&ar[j]>d)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=d;
    }
    cout<<"Sorted array is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }
    cout<<endl;
    int p;
    cin>>p;
    for(i=n;i>=0;i--)
    {
        if(ar[i]>p)
            ar[i+1]=ar[i];
        else
        {
            ar[i+1]=p;
            break;
        }
    }
    cout<<"Array after insertion of "<<p<<endl;
    for(i=0;i<n+1;i++)
    {
        cout<<ar[i]<<' ';
    }
}
