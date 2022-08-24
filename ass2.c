#include<stdio.h>
#include<conio.h>
int minNum(int a[],int n)
{
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    return min;
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
    printf("Smallest element in array is %d\n",minNum(a,n));
    getch();
    return 0;
}