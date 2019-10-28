/*ashutosh shrimal*/
#include <bits/stdc++.h>
#include "rdm.h"
#include <time.h>
using namespace std;
void mer(int ar[],int l,int mid1,int mid2,int h,int n)
{
int C,left,right,i,temp[n];
C=l;
left=l;
right=mid2;
while(left<=mid1&&right<=h)
{
    if(ar[left]<=ar[right])
    {
        temp[C]=ar[left];
        left=left+1;
    }
    else
    {
        temp[C]=ar[right];
        right=right+1;
    }
    C=C+1;
}
    if(left>mid1)
    {
       while(right<=h)
       {
           temp[C]=ar[right];
           right=right+1;
           C=C+1;
       }
    }
    else
    {
        while(left<=mid1)
        {
          temp[C]=ar[left];
           left=left+1;
           C=C+1;
        }
    }
    for(i=l;i<=h;i++)
        ar[i]=temp[i];
}
void msort(int ar[],int l,int h,int n)
{   //cout<<"c1 ";
    if(l<h)
    {
        int mid=ceil((l+h)/2.0);
        cout<<"mid="<<mid;
        msort(ar,l,mid-1,n);
        msort(ar,mid,h,n);
        mer(ar,l,mid-1,mid,h,n);
    }
}
int main()
{
    int n,i;
    cout<<"Enter array size:";
    cin>>n;
    int ar[n];
    rdm(ar,n);
    cout<<"array before sorting"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    msort(ar,0,n-1,n);
    cout<<"array after sorting"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
