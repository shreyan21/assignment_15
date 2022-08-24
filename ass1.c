#include<stdio.h>
#include<conio.h>
int maxNum(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
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
    printf("Greatest element in array is %d\n",maxNum(a,n));
    getch();
    return 0;
}