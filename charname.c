#include<stdio.h>
#include<conio.h>
main()
{
	int a=12,b=14;
	float c=1234.5678;
	char name[]="suwan janin";
	printf("Value of a = %d \n",a);
	printf("VAlue of b = %d \n",b);
	printf("Value of d = %f, %e \n",c,c);
	printf("Value of c = %.2f, %.3e, \n",c,c);
	printf("Value of name = %s, %.3s, %.9s",name,name,name);
	getch();
	return 0;
}

