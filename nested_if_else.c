#include <stdio.h>
int main()
{
   int variable1, variable2;
   printf("Input the value of variable1:");

   scanf("%d", &variable1);

   printf("Input the value of variable2:");

   scanf("%d",&variable2);

   if (variable1 != variable2)
   {
	printf("variable1 is not equal to var2\n");
	
	if (variable1 > variable2)
	{
		printf("variable1 is greater than var2\n");
	}
	else
	{
		printf("variable2 is greater than var1\n");
	}
   }
   else
   {
	printf("variable1 is equal to var2\n");
   }
   return 0;
}