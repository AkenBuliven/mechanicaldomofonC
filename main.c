#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void)
{
	int b1 = 0, b2 = 0, b3 = 0;


	scanf("%d%d%d", &b1, &b2, &b3);



	if  ((b1 == 2 || b2 == 2 || b3 == 2) && (b1 == 8 || b2 == 8 || b3 == 8) && (b1 == 4 || b2 == 4 || b3 == 4))
	{
		printf ("open");
	}
	else 
	{
		printf ("close");
	}


return 0;
}

