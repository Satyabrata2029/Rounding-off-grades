#include<stdio.h>
main()
{
	int n,i,x,y, z;
	int grade[100];//Declaration of an array to store the grades
	printf("Enter the number of students: ");
	scanf("%d", &n);
	printf("\nEnter grades: ");
	for(i=0;i<n;i++)
	{
		printf("\nStudent %d: ", (i+1));
		scanf("%d", &grade[i]);
	}
	printf("\nRounded-off Grades are as follows: ");
	for(i=0;i<n;i++)
	{
		if(grade[i]<38)
		{                   
			printf("\nStudent %d: %d", (i+1), grade[i]);
		}
		else
		{
		x=grade[i]+1;
		y=grade[i]+2;
	    z=(x%5==0)?x:(y%5==0?y:grade[i]);
		printf("\nStudent %d: %d", (i+1), z);
	}
	}
	return 0;
}
