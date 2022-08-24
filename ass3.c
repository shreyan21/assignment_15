#include<stdio.h>
#include<conio.h>
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {   
            if(a[j]>a[j+1])
            swap(&a[j],&a[j+1]);

        }
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
    sort(a,n);
    printf("Sorted array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
    return 0;
}