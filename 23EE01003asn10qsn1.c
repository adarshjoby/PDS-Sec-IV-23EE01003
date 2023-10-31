#include <stdio.h>

struct studs 
{
	int roll; 
	char name[25];
	int age;	
} ;

int main(void)
{
	struct studs s[5];
	
	for (int i = 0 ; i < 5; i++)
	{
		s[i].roll = i+1; 
		printf("Enter Student %d Name :	", i+1); 
		scanf("%s",&s[i].name);
		printf("Enter Age :	");
		scanf("%d",&s[i].age);
	}
	
	printf("The Details of Student Roll No. 2\n");
	printf("%s %d",s[1].name,s[1].age);
	
	return 0;
}
