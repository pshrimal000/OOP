#include <stdio.h>
#include "rdm.h"
void sort(int*ar,int n)
{
    int i,j,d;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
           if(*(ar+j)>*(ar+j+1))
           {
               d=*(ar+j);
               *(ar+j)=*(ar+j+1);
               *(ar+j+1)=d;
           }
        }
        int k;
        printf("\npass %d\n",i);
        for(k=0;k<n;k++)
        {
            printf("%d ",*(ar+k));
        }
    }
}
int main()
{

    int n,i;
    scanf("%d",&n);
    int ar[n];
    rdm(ar,n);
    printf("Orrignal array!\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    sort(ar,n);
    printf("\nSorted array!\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}
