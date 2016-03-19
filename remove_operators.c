#include<stdio.h>
#include<string.h>
int isvar(char c)
{
	if((c!='+')&&(c!='-')&&(c!='*')&&(c!='/')&&(c!=')')&&(c!='(')&&(c!='%'))
	{
		return 1;
	}
	return 0;
}
int main()
{
	char str[20]="A+B(A/C)",nstr[10][10];
	int i,nstr_i=0,nstr_j=0;
	for(i=0;str[i]!=0;i++)
	{
		if(!isvar(str[i]))
		{
			str[i]='@';
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='@')
		{
			strcpy(nstr[nstr_i][nstr_j++],str[i]);
			if(str[i+1]=='@')
			{
				
				nstr[nstr_i][nstr_j]='\0';
				nstr_i++;
				nstr_j=0;
			}
		}
	}
	for(i=0;i<=nstr_i;i++)
	{
		printf("%s\n",nstr[i]);
	}
	return 0;
}
