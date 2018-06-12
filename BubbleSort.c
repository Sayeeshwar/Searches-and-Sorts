#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[50],n,temp;
    printf("\n Enter the number of elements you will enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
}
