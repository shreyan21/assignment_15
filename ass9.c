#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int *mergedArray(int a[], int b[], int m)
{
    int i=0, j=0;
    int *p = (int *)calloc(2 * m, sizeof(int));
    while(i<m)
    {
        p[i]=a[i];
        i++;
    }
    while(i<2*m)
    {
        p[i]=b[j];
        j++;
        i++;
    }
    for (i = 0; i < 2 * m; i++)
    {
        for (j = 0; j < 2 * m - i - 1; j++)
        {
            if (p[j] < p[j + 1])
                swap(&p[j], &p[j + 1]);
        }
    }
    return p;
}

int main()
{
    int m, i, *p = NULL;
    printf("Enter the size of arrays : ");
    scanf("%d", &m);
    int a[m], b[m];
    printf("Enter the elements of first array : ");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    printf("Enter the elements of second array : ");
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    printf("Merged array in descending order : ");
    p=mergedArray(a,b,m);
    for (i = 0; i < 2 * m; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    getch();
    return 0;
}