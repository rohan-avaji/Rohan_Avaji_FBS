#include<stdio.h>

struct studdetail
{
	int rollno;
	char name[20];
	int marks;
	char address[20];
};

void main()
{
	struct studdetail s1, s2, s3;
	
	printf("Details of Student 1 \n");
	s1.rollno;
	printf("Rollno of student is:");
	scanf("%d",&s1.rollno);
	
	s1.name;
	printf("Name of student is: ");
	scanf("%s",s1.name);
	
	s1.marks;
	printf("Marks of student is: ");
	scanf("%d",&s1.marks);
	
	s1.address;
	printf("Address of student is: ");
	scanf("%s",s1.address);
	
	printf("Details of S2\n");
	s2.rollno;
	printf("Rollno of student is: ");
	scanf("%d",&s2.rollno);
	
	s2.name;
	printf("Name of student is: ");
	scanf("%s",s2.name);
	
	s2.marks;
	printf("Marks of student is: ");
	scanf("%d",&s2.marks);
	
	s2.address;
	printf("Address of student is: ");
	scanf("\n%s",s2.address);
	
	printf("Details of S3\n");
	s3.rollno;
	printf("Rollno of student is: ");
	scanf("%d",&s3.rollno);
	
	s3.name;
	printf("Name of student is: ");
	scanf("%s",s3.name);
	
	s3.marks;
	printf("Marks of student is: ");
	scanf("%d",&s3.marks);
	
	s3.address;
	printf("Address of student is: ");
	scanf("%d",s3.address);
	
	printf("\n Details of Student 1 \n");
	printf("Rollno of student is:%d",s1.rollno);
	printf("Name of student is:%s",s1.name);
	printf("Marks of student is:%d",s1.marks);
	printf("Address of student is:%s \n",s1.address);
	
	printf("Details of Student s \n");
	printf("Rollno of student is:%d",s2.rollno);
	printf("Name of student is:%s",s2.name);
	printf("Marks of student is:%d",s2.marks);
	printf("Address of student is:%s\n",s2.address);
	
	printf("Details of Student 3 \n");
	printf("Rollno of student is:%d",s3.rollno);
	printf("Name of student is:%s",s3.name);
	printf("Marks of student is:%d",s3.marks);
	printf("Address of student is:%s",s3.address);

}