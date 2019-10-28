#include <bits/stdc++.h>
#include "rdm.h"
using namespace std;
int main()
{
    int n,i,j,d,max_val;
    cin>>n;
    int ar[n];
    srand(time(NULL));
    rdm(ar,n);
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }
    int pos=0;
    d=maxi(ar,n,&pos);
    int freq[d]={0};
    for(i=0;i<n;i++)
    {
        freq[ar[i]]++;
    }
    pos=0;
    max_val=maxi(freq,d,&pos);
    cout<<endl<<pos<<" it apperad "<<max_val<<" times "<<endl;
}
