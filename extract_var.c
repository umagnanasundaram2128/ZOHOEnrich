#include<stdio.h>
#include<string.h>
int isNum(char str[])
{
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		
		if(((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z')))
		{
			return 0;
		}
		
		
	}
	return 1;
}
int main()
{
	int i,j,f=0,op_i=0;
	char s;
	char str[][3]={"w","za","d1","1c","43"};
	char op[10][3];
	for(i=0;i<5;i++)
	{
		if(!isNum(str[i]))
		{
			strcpy(op[op_i++],str[i]);	
		}
	}
	
	for(i=0;i<op_i;i++)
	{
		printf("%s\n",op[i]);
	}
	return 0;
}
