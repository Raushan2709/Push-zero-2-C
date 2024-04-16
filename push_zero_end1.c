//using bubble alogithm
#include<stdio.h>
int main()
{
    int ar[5]={5,0,0,9,7};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
        if(ar[j]<ar[j+1])
        {
            int org=ar[j+1];
            ar[j+1]=ar[j];
            ar[j]=org;
        }
    }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d",ar[i]);
    return 0;
} 