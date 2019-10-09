/*ashutosh shrimal*/
#include <bits/stdc++.h>
#include "rdm.h"
#include <time.h>
using namespace std;
int part(int ar[],int l,int h,int n)
{
    int piv=ar[l];
    int left,right;
    left=l+1;
    right=h;
    while(left<=right)
    {
        while(left<=h&&ar[left]<=piv)
        {
            left=left+1;
        }
        while(ar[right]>piv)
            right=right-1;
        if(left<right)
        {
            swap(ar[left],ar[right]);
        }
    }
    swap(ar[right],ar[l]);
    return right;
}
void qsort(int ar[],int l,int h,int n)
{
    int i;
    if(l<h)
    {
    int piv=part(ar,l,h,n);
    qsort(ar,l,piv-1,n);
    qsort(ar,piv+1,h,n);
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
    qsort(ar,0,n-1,n);
    cout<<"\narray after sorting"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
