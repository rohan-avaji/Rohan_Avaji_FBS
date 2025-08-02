typedef struct Admin
{
	int AdminId;
	char AdminName[20];
	double salary;
	char allowance[40];
	double allowanceAmt;
}Admin;

#include<stdio.h>
void main()
{
	Admin a1, a2, a3;
	
	printf("Details of Admin 1 \n");
	a1.AdminId;
	printf("Adminid of admin is:");
	scanf("%d",&a1.AdminId);
	
	a1.AdminName;
	printf("AdminName of admin is: ");
	scanf("%s",a1.AdminName);
	
	a1.salary;
	printf("Salary of admin is: ");
	scanf("%lf",&a1.salary);
	
	a1.allowance;
	printf("Allowance of admin is: ");
	scanf("%s",a1.allowance);
	
	a1.allowanceAmt;
	printf("Allowance Amount of admin is: ");
	scanf("%lf",&a1.allowanceAmt);
	
	printf("Details of Admin 2 \n");
	a2.AdminId;
	printf("Adminid of admin is:");
	scanf("%d",&a2.AdminId);
	
	a2.AdminName;
	printf("AdminName of admin is: ");
	scanf("%s",a2.AdminName);
	
	a2.salary;
	printf("Salary of admin is: ");
	scanf("%lf",&a2.salary);
	
	a2.allowance;
	printf("Allowance of admin is: ");
	scanf("%s",a2.allowance);
	
	a2.allowanceAmt;
	printf("Allowance Amount of admin is: ");
	scanf("%lf",&a2.allowanceAmt);
	
	printf("Details of Admin 3 \n");
	a3.AdminId;
	printf("Adminid of admin is:");
	scanf("%d",&a3.AdminId);
	
	a3.AdminName;
	printf("AdminName of admin is: ");
	scanf("%s",a3.AdminName);
	
	a3.salary;
	printf("Salary of admin is: ");
	scanf("%lf",&a3.salary);
	
	a3.allowance;
	printf("Allowance of admin is: ");
	scanf("%s",a3.allowance);
	
	a3.allowanceAmt;
	printf("Allowance Amount of admin is: ");
	scanf("%lf",&a3.allowanceAmt);
	
	printf("Details of Admin 1\n");
	
	printf("Adminid of admin is:%d",a1.AdminId);
	printf("\nAdminname of admin is:%s",a1.AdminName);
	printf("\nSalary of admin is:%lf",a1.salary);
	printf("\nAllowance of admin is:%s",a1.allowance);
	printf("\nAllowance Amount of admin is:%lf\n",a1.allowanceAmt);
	
	printf("\nDetails of Admin 2\n");
	
	printf("\nAdminid of admin is:%d",a2.AdminId);
	printf("\nAdminname of admin is:%s",a2.AdminName);
	printf("\nSalary of admin is:%lf",a2.salary);
	printf("\nAllowance of admin is:%s\n",a2.allowance);
	printf("\nAllowance Amount of admin is:%lf",a2.allowanceAmt);
	
	printf("\nDetails of Admin 3\n");
	
	printf("\nAdminid of admin is:%d",a3.AdminId);
	printf("\nAdminname of admin is:%s",a3.AdminName);
	printf("\nSalary of admin is:%lf",a3.salary);
	printf("\nAllowance of admin is:%s\n",a3.allowance);
	printf("Allowance Amount of admin is:%lf\n ",a3.allowanceAmt);

}