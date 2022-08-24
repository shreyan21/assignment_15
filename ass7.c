#include<stdio.h>
#include<conio.h>
int duplicate(int a[],int n)
{
    int i,j,flag=0,count=0;
    for(i=0;i<n;i++)
    {  flag=0;
        for(j=0;j<i;j++)
        {
            if(a[j]==a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        count++;
    }
    return n-count;
}
int main()
{
      int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements : ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Total number of duplicate elements in array are : %d\n",duplicate(a,n));
    getch();
    return 0;
}