#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,index,count;
    int *array;
    printf("Enter number of elements: ");
    scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int *));
	printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    count = 1 << n;
	printf("Combinations are:\n");
    for(i=0;i<count;i++)
    {
        index=1;
        for(j=0;j<=index;j++)
        {
            if(index&i)
               {
                   printf(" %d ",array[j]);
               }
            index=index<<1;
        }
        printf("\n");
    }
    free(array);
	return 0;
}
