//to print the given numbers 1 to 10 except 5 and7
#include<stdio.h>
void main()
{
	int n;
	n=1;
	while(n<=10)
	{
		if((n==5)||(n==7))
		n++;
		printf("%d\n",n);
		n++;
    }
}
