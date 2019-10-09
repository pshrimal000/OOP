
/*ashutosh shrimal*/
#include <bits/stdc++.h>
#include "rdm.h"
#include <time.h>
using namespace std;
int part(int a[],int l,int r,int n)
{
    int j,temp,i=l;
    for(j=l;j<r-1;j++)
    {
        if(a[j]<=a[r-1])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            i++;
        }
    }
    temp=a[i];
    a[i]=a[r-1];
    a[r-1]=temp;
    return i;
}
void qsort(int ar[],int l,int h,int n)
{
    int i;
     if(l<h)
    {
    int piv=part(ar,l,h,n);
  //  qsort(ar,l,piv-1,n);
   // qsort(ar,piv+1,h,n);
    }
}
int main()
{
    int n,i;
    cin>>n;
    srand(time(NULL));
    int ar[n];
    rdm(ar,n);
    cout<<"array before sorting"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    qsort(ar,0,n,n);
    cout<<"\narray after sorting"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
