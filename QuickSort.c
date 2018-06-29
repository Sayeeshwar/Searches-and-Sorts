#include<stdlib.h>
#include<stdio.h>
void print(int a[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        printf(" %d, ",a[i]);
    }
    printf(" %d\n\n",a[i]);
}

int part(int a[],int start,int end)
{
    int i,temp,pivot=a[end], pInd=start;
    for(i=start;i<end;i++)
    {
        if(a[i]<=pivot)
        {
            temp=a[i];
            a[i]=a[pInd];
            a[pInd]=temp;
            pInd++;
        }
    }
    temp=a[pInd];
    a[pInd]=a[end];
    a[end]=temp;
    return pInd;
}

void quicksort(int a[],int start,int end)
{
    int ind;
    if(start<end)
    {
        ind=part(a,start,end);
        quicksort(a,start,ind-1);
        quicksort(a,ind+1,end);
    }
}

int main()
{
    int i,n,a[50];
    printf("\n Enter the number of elements you wish to enter: ");
    scanf("%d",&n);
    printf("\n Enter your elements one by one: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Before sorting: \n");
    print(a,n);
    quicksort(a,0,n-1);
    printf("\n After sorting: \n");
    print(a,n);
    return 0;
}
