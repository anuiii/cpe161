#include<stdio.h>
#include<conio.h>
main()
{
	float x=10,y=5,z;
	int ten,five,coin;
	ten=(int)z/(int)x;
	five=(int)z%(int)x/(int)y;
	coin=(int)z%(int)x%(int)y;
	printf("Number your coin?:");
	scanf("%f",&z);
	printf("All change of %f \n",z);
	printf(" Number of Ten Bath is %d coins. \n", ten);
	printf(" Number of Five Bath is %d coin. \n",five);
	printf(" Number of One Bath is %d coin. \n",coin);
	getch();
	return 0;	
}
