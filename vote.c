#include<stdio.h>
#include<stdlib.h>
int find_max(int count[],int n)
{
	int i,ind,max=0;
	for(i=0;i<n;i++)
	{
		if(max<count[i])
		{
			max=count[i];
			ind=i;
		}
	}
	return(ind);
}

int sum(int count[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
		s=s+count[i];
	}
	return s;
}
int main()
{
	int *count;
	char **parties;
	int tot_count=0,n,ch,i,index,invalid,valid;
	int choice;
	printf("No of parties:");
	scanf("%d",&n);
	count=(int *)calloc(n,sizeof(int *));
	parties=malloc(n*sizeof(char *));
	for(i=0;i<n;i++)
	{
		parties[i]=malloc(100*sizeof(char));
	}
	printf("Enter the party names:");
	for(i=0;i<n;i++)
	{
		scanf("%s",parties[i]);
	}
	
	
	do
	{
		printf("1.Do you want to vote?\n2.quit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				for(i=0;i<n;i++)
				{
					printf("%d . %s\n",i+1,parties[i]);
				}	
				printf("your vote is for :");
				scanf("%d",&ch);
				count[ch-1]++;
				tot_count++;
				break;
			case 2:
				printf("\n\n\n");
			
				for(i=0;i<n;i++)
				{	
					printf("%d . %s\t%d\n",i+1,parties[i],count[i]);
				}
				index=find_max(count,n);
				printf("\n\n%s got maximum vote of count %d",parties[index],count[index]);
				valid=sum(count,n);
				invalid=tot_count-valid;
				printf("\n\nNumber of invalid votes that had been casted: %d",invalid);	
		}
	}while(choice!=2);
	return 0;
}
