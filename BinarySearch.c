#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a[50],key,left,right,mid,flag=0;
    printf("\n Enter the number of elements to enter (in ascending order) : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element to find: ");
    scanf("%d",&key);
    left=0;
    right=n-1;
    mid=(left+right)/2;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==key)
        {
            printf("\n The key %d is found at position %d",key,mid+1);
            flag++;
            break;
        }
        else
        {
            if(a[mid]>key)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
    }
    if(flag==0)
    {
        printf("\n The key %d was not present in the list",key);
    }
    return 0;
}
