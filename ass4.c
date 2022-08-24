#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void rotate(int a[], int size, int n, int d)
{
    int i, j, k;
    if (d == 'l')
        for (i = 0; i < n; i++)
        {
            k = a[0];
            for (j = 0; j < size - 1; j++)
            {
                a[j] = a[j + 1];
            }
            a[j] = k;
        }
    else if (d == 'r')
    {
        for (i = 0; i < n; i++)
        {
            k = a[size - 1];
            for (j = size - 1; j > 0; j--)
            {
                a[j] = a[j - 1];
            }
            a[j] = k;
        }
    }
}
int main()
{
    int size,i;
    char d;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements : ");
    for( i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("In which direction you want to rotate (l for left , r for right) : ");
    d=getche();
    printf("\nUpto How many positions you want to rotate : ");

    scanf("%d",&i);
    rotate(a,size,i,d);
    printf("Array after rotation is : ");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
   getch();
   return 0;
}