#include <stdio.h>

int main(int argv ,char* argc[])
{
	printf("hello world\n");
	int i=0;
	for(i= 0;i<argv ;i++)
	{	printf("no %d , argc = [%s]\n",i,argc[i]);
	}
	return 0;
}
