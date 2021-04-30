#include <stdio.h>
int prime(int n);


int main(void)
{
	
	int i;
	for(i=2;i<100;i++)
	{
		if(prime(i) == 1)
		{
			printf("%d\t",i)；
		}
	}

}

int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i == 0)
		{
			return 0;
		}
		
	}

	return 1;

}
