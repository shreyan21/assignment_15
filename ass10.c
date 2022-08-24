#include<stdio.h>
#include<conio.h>
int occurences(int[],int,int);
void frequency(int a[],int n)
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
        printf("Frequency of %d is %d\n",a[i],occurences(a,n,a[i]));
    }
}
int occurences(int a[],int n,int x)
{
   int i,count=0;
   for(i=0;i<n;i++)
   {
    if(a[i]==x)
    {
        count++;
    }
   }
   return count;
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
    printf("Frequency of elements in array are below : \n");
    frequency(a,n);
    getch();
    return 0;
}