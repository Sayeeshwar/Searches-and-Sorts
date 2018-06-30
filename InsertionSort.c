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

void insertsort(int a[],int n)
{
    int i,hole,value;
    for(i=1;i<n;i++)
    {
        value=a[i];
        hole=i;
        while((hole>0)&&(a[hole-1]>value))
        {
            a[hole]=a[hole-1];
            hole--;
        }
        a[hole]=value;
    }
}

int main()
{
    int i,a[50],n;
    printf("\nInsertion sort implementation: \n\nEnter the number of elements you will enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n Before sorting: \n");
    print(a,n);
    insertsort(a,n);
    printf("\n After sorting: \n");
    print(a,n);
    return 0;
}
