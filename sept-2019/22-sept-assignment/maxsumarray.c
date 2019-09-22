#include<stdio.h>
int sum(int a[], int size, int *begin, int *end);
int main()
{
    int arr[50],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int start = 0, end = 0;
    printf(" The max sum is %d", sum(arr, n , &start, &end));
   // printf(" The begin and End are %d & %d", start, end);
    return 0;
}

int sum(int a[], int size, int *begin, int *end)
{
    int max = 0,maxend = 0;
    int i,c = 0;
 
    for (i = 0; i < size; i++)
    {
        maxend = maxend + a[i];
        if (maxend <= 0)
        {
            maxend = 0;
            c = i + 1;
        }
        else if (max < maxend)
        {
            max = maxend;
            *begin = c;
            *end = i;
        }
   }
   return max;
}
 
