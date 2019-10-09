#include <bits/stdc++.h>
#include "rdm.h"
using namespace std;
int main()
{
    int n,i,j,d;
    cin>>n;
    int ar[n];
    srand(time(NULL));
    rdm(ar,n);
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }
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
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }
    cout<<endl;
}
