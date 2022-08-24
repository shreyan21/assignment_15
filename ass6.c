#include<stdio.h>
#include<conio.h>
void reverseDisplay(int a[],int n)
{  
    int i;
    printf("Enter the numbers : ");
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reversed array is : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    reverseDisplay(a,n);
    getch();
    return 0;
}
