#include<stdio.h>
#include<unistd.h>
int main()
{
	char wish[]="HAPPY PONGAL";
	int i;
	for(i=0;i<12;i++)
	{
		printf("%c",wish[i]);
		usleep(1000);
	}
	return 0;
}
	
