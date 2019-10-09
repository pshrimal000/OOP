#include <bits/stdc++.h>
#include "rdm.h"
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    int ar[n];
    srand(time(NULL));
    rdm(ar,n);
    int pos,d;
    for(i=0;i<n;i++)
        cout<<ar[i]<<' ';
    cout<<endl;
    for(i=0;i<n-1;i++)
    {
          // cout<<"\nminimum is "<<endl;
           pos=minimum(ar,i,n);
          // cout<<ar[pos]<< "pos " <<pos;
            swap(ar[i],ar[pos]);
              printf("pass %d\n",i+1);
            for(k=0;k<n;k++)
            {
            printf("%d ",*(ar+k));
            }
            cout<<endl;
    }
    cout<<endl;
    cout<<"\n!FINAL ARRAY AFTER SORTING!"<<endl;
    for(i=0;i<n;i++)
        cout<<ar[i]<<' ';
}
