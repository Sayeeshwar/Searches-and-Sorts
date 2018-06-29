#include<stdio.h>
#include<stdlib.h>

void print(int a[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        printf(" %d, ",a[i]);
    }
    printf(" %d\n\n",a[i]);
}

void selectsort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}

int main()
{
    int i,a[50],n;
    printf("\nSelection Sort Implementation: \n\nEnter the number of elements you will enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n Before sorting: \n");
    print(a,n);
    selectsort(a,n);
    printf("\n After sorting: \n");
    print(a,n);
    return 0;
}
