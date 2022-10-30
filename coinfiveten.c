#include<stdio.h>
#include<conio.h>
main()
{
	float x=37.0,y=10.0,z=5.0;
	int ten,coin,five;
	ten=(int)x/(int)y;
	coin=(int)x%(int)y/3;
	five=(int)x%(int)y/(int)z;
	printf("All Change of %f \n",x);
	printf("Number of Ten Bath is %d coin. \n",ten);
	printf("Number of One Bath is %d coin. \n",coin);
	printf("Number of Five Bath is %d coin. \n",five);
	getch();
	return 0;	
}
