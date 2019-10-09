#include <bits/stdc++.h>
#include <time.h>
using namespace std;
void rdm(int ar[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        ar[i]=rand()%(99-0+1)+0;
    }
}
int main()
{
    int n,i;
    cin>>n;
    int ar[n];
    srand(time(NULL));
    rdm(ar,n);
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }
}
