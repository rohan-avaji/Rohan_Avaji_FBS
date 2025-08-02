#include<stdio.h>

typedef struct Employee
{
	int empid;
	char empname[20];
	char email[30];
	char address[20];
}Employee;

void main()
{
	Employee e1, e2, e3;
	
	printf("Details of Employee 1 \n");
	e1.empid;
	printf("Empid of employe is:");
	scanf("%d",&e1.empid);
	
	e1.empname;
	printf("empname of employe is: ");
	scanf("%s",e1.empname);
	
	e1.email;
	printf("Email of employe is: ");
	scanf("%s",e1.email);
	
	e1.address;
	printf("Address of employe is: ");
	scanf("%s",e1.address);
	
	printf("Details of Employee 2 \n");
	e2.empid;
	printf("Empid of employe is:");
	scanf("%d",&e2.empid);
	
	e2.empname;
	printf("empname of employe is: ");
	scanf("%s",e2.empname);
	
	e2.email;
	printf("Email of employe is: ");
	scanf("%s",e2.email);
	
	e2.address;
	printf("Address of employe is: ");
	scanf("%s",e2.address);
	
	printf("Details of Employee 3 \n");
	e3.empid;
	printf("Empid of employe is:");
	scanf("%d",&e3.empid);
	
	e3.empname;
	printf("empname of employe is: ");
	scanf("%s",e3.empname);
	
	e3.email;
	printf("Email of employe is: ");
	scanf("%s",e3.email);
	
	e3.address;
	printf("Address of employe is: ");
	scanf("%s",e3.address);
	
	printf("Details of employee 1\n");
	
	printf("Empid of employe is:%d",e1.empid);
	printf("\nEmpname of employe is:%s",e1.empname);
	printf("\nEmail of employe is:%s",e1.email);
	printf("\nAddress of employe is:%s\n",e1.address);
	
	printf("Details of employee 2\n");
	
	printf("Empid of employe is:%d",e2.empid);
	printf("\nEmpname of employe is:%s",e2.empname);
	printf("\nEmail of employe is:%s",e2.email);
	printf("\nAddress of employe is:%s\n",e2.address);
	
	printf("Details of employee 3\n");
	
	printf("Empid of employe is:%d",e3.empid);
	printf("\nEmpname of employe is:%s",e3.empname);
	printf("\nEmail of employe is:%s",e3.email);
	printf("\nAddress of employe is:%s",e3.address);

}