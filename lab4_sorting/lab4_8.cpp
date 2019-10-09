
#include <bits/stdc++.h>
#include "rdm.h"
#include <string.h>
using namespace std;
int main()
{
    int n,i,j,d,count=0;
    char ar[100005];
    gets(ar);
    n=strlen(ar);
    //cout<<endl;
    //puts(ar);
    for(i=1;i<n;i++)
    {
        d=ar[i];
        j=i-1;
        while(j>=0&&ar[j]>d)
        {
            ar[j+1]=ar[j];
            j--;
            count++;
        }
        ar[j+1]=d;
    }
    for(i=0;i<n;i++)
    {
        cout<<ar[i];
    }
    cout<<"\narray sorted in "<<count<<"shifts"<<endl;
    cout<<endl;
}
