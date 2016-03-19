#include<stdio.h>
#include<stdlib.h>
int size=5;
struct node
{
    int val;
    struct node *next;
}*top;
void push(int num)
{
	struct node *new = (struct node *)malloc(sizeof(struct node));
	if(top==NULL)
	{
		top=new;
		top->next =NULL;
		top->val=num;
	}
	else
	{
		new->next=top;
		new->val=num;
		top=new;
	}
}
void display()
{
	struct node *new=top;
	if(new==NULL)
	{
		printf("\nEMPTY\n");
	}
	while(new!=NULL)
	{
		printf("%d\n",new->val);
		new=new->next;
	}
}
int pop()
{
	int value=top->val;;
	struct node *new=top;
	new=new->next;
	top=new;
	
	return value;
}
	
int main()
{
	int num,ch,count=0;
	top=NULL;
	do
	{
		printf("1.Push\n2.Pop\n3.display\n4.Exit\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:if(count==size)
					{
						printf("\nFULL\n");
					}
					else
					{
						printf("Enter the number to be pushed:");
						scanf("%d",&num);
						push(num);
						count++;	
					}
					//display();
					break;
			case 2:if(count==0)
					{
						printf("\nEMPTY\n");
					}
					else
					{
						num=pop();
						printf("Popped value is :%d\n",num);
						count--;
					}
					//	display();
					break;
			case 3:display();	
					break;
		}
	}while(ch!=4);	
	return 0;
}
				
