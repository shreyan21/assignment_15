#include<stdio.h>
#include<conio.h>
void uniquePrint(int a[],int n)
{
    int i,j,flag=0;
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
        printf("%d ",a[i]);
    }
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
    printf("Unique elements are : ");
    uniquePrint(a,n);
    getch();
    return 0;
}