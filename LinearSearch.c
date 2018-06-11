#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a[50],key,flag=0;
    printf("\n Enter the number of elements to enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element to find: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("\n The key %d is at position %d.",key,i+1);
            ++flag;
        }
    }
    if(flag==0)
    {
        printf("\n The key %d was not present in the list",key);
    }
    return 0;
}
