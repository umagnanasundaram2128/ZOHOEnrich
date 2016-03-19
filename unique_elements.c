#include<stdio.h>
void main()
{
	int a[10]={10,20,30,20,50,30,20,10};
	int i,j,k=0,b[10],count=0;
	for(i=0;a[i]!=0;i++)
	{
		count=0;
		for(j=i+1;a[j]!=0;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				break;
			}
			else 
			{
				count=0;
			}
		}
		if(count==0)
		{
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d\n",b[i]);
	}
}

