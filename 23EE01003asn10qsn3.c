#include <stdio.h>
#include <string.h>

struct student 
{
	char name[30];
	int marks[5];
};

int main(void)
{
	int n; 
	printf("Enter No. of Students :	");
	scanf("%d",&n);
	struct student s[n]; 
	
	for (int i = 0; i < n; i++)
	{
		printf("Enter Student %d Name : ", i + 1);
		scanf("%s", &s[i].name);
		printf("Enter Marks of 5 Subjects :");
		scanf("%d %d %d %d %d", &s[i].marks[0],&s[i].marks[1],&s[i].marks[2],&s[i].marks[3],&s[i].marks[4]);
	}
	
	char ele[30];
	printf("Enter Student Name to Search : ");
	scanf("%s",&ele); 
	int mark = 1; 
	
	for (int i = 0; i < n; i++)
	{
		if (!strcmp(s[i].name,ele))
		{
			mark  = 0; 
			int sum = s[i].marks[0] + s[i].marks[1] + s[i].marks[2]+ s[i].marks[3] + s[i].marks[4];
			float avg = sum/5.0; 
			printf("Student Found\n");
			printf("Name : %s\n",ele);
			printf("Total : %d\t Avg : %.2f\n",sum,avg);
		}
	}
	
	if (mark)
		printf("Student Not Found\n");
	return 0;
}
