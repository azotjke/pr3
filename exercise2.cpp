#include<stdio.h>

main()
{
	long long int pin1,pin2;
	printf("pin1=");
	scanf("%i",&pin1);
	printf("pin2=");
	scanf("%i",&pin2);
	
	if(((pin1==33)&&(pin2==44))||((pin1==55)&&(pin2==66)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
}

