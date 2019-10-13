#include <stdio.h>
#include<stdlib.h>
void quicksort(int a[],int f,int l)
{
    int pivot=a[f],i=f,j=l,temp;
    if(f<l)
    {
        while(i<j)
        {
            while(a[i]<=pivot && i<=l)
            i++;
            while(a[j]>pivot)
            j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        if(j!=f)
        {
        temp=a[j];
        a[j]=a[f];
        a[f]=temp;
        }
        quicksort(a,f,j-1);
        quicksort(a,j+1,l);

    }
}
int main()
{
    int n,a[20],i;
    printf("enter n:");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
