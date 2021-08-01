#include<stdio.h>
#include<conio.h>
int main()
{
	printf("Programmer Name:Muhammad Saad\n");
	printf("Reg.No.:20MDELE163\n\n");
	int marks[4][3],maxmark[4],x,y;
	for(x=0;x<4;x++)
	{
		printf("Enter the marks of %d student\n",x+1); //Marks entry for students
		for(y=0;y<3;y++)
		{
			scanf("%d",&marks[x][y]);
		}
	}
	for(x=0;x<4;x++){
		maxmark[x]=0;
		for(y=0;y<3;y++){
			if(marks[x][y] >maxmark[x])
			{
				maxmark[x]=marks[x][y];
			}
		}
	}
	printf("****************Max marks*******************\n");
	for(x=0;x<4;x++){
		printf("Max marks of student %d is %d \n",(x+1),maxmark[x]);
	}
	printf("************THE END OF PROGRAM***************\n");
}
