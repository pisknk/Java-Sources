#include <stdio.h>

int main() {
	int x;
	printf("\nInput an integer: ");
	scanf("%d", &x);

	if(x >=0 && x <= 10)
	{
		printf("Range [0, 10]\n");
	}
	else if(x >=11 && x <= 20)
	{
		printf("Range [10,20]\n");
	}
	else if(x >=21 && x <= 30)
	{
		printf("Range [20,30]\n");
	}
	else if(x >31 && x <= 40) {

		printf("Range [30,40]\n");
	}
    else if(x >41 && x <= 50)
    {
		printf("Range [40,50]\n");
	}
	else if(x >=51 && x <= 60)
	{
		printf("Range [50,60]\n");
	}
	else if(x >=61 && x <= 70)
	{
		printf("Range [60,70]\n");
	}
	else if(x >71 && x <= 80) {

		printf("Range [70,80]\n");
	}
    else if(x >81 && x <= 90)
    {
		printf("Range [80,90]\n");
    }
    else if(x >91 && x <= 100)
    {
		printf("Range [90,100]\n");
    }
	else
	{
	printf("Outside range\n");
	}
	return 0;
}
