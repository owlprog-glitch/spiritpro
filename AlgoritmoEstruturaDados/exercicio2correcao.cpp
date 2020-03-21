#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	
	for(i=0; i<10; i++)
	{
		int *pont=&i;
		printf("\n %p", &pont[i]);		
	}
}
