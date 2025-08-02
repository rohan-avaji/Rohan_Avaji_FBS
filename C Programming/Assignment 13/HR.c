typedef struct HR
{
	int HRId;
	char HRName[20];
	double salary;
	double commision;
}HR;

#include<stdio.h>
void main()
{
	HR hr1, hr2, hr3;
	
	printf("Details of HR 1 \n");
	hr1.HRId;
	printf("HRid is:");
	scanf("%d",&hr1.HRId);
	
	hr1.HRName;
	printf("HRname is: ");
	scanf("%s",hr1.HRName);
	
	hr1.salary;
	printf("Salary is: ");
	scanf("%lf",&hr1.salary);
	
	hr1.commision;
	printf("Commision is: ");
	scanf("%lf",&hr1.commision);
	
	printf("Details of HR 2 \n");
	hr2.HRId;
	printf("HRid is:");
	scanf("%d",&hr2.HRId);
	
	hr2.HRName;
	printf("HRname is: ");
	scanf("%s",hr2.HRName);
	
	hr2.salary;
	printf("Salary is: ");
	scanf("%lf",&hr2.salary);
	
	hr2.commision;
	printf("Commision is: ");
	scanf("%lf",&hr2.commision);
	
	printf("Details of HR 3 \n");
	hr3.HRId;
	printf("HRid is:");
	scanf("%d",&hr3.HRId);
	
	hr3.HRName;
	printf("HRname is: ");
	scanf("%s",hr3.HRName);
	
	hr3.salary;
	printf("Salary is: ");
	scanf("%lf",&hr3.salary);
	
	hr3.commision;
	printf("Commision is: ");
	scanf("%lf",&hr3.commision);
	
	printf("Details of HR 1\n");
	
	printf("HRid is:%d",hr1.HRId);
	printf("\nHRnname is:%s",hr1.HRName);
	printf("\nSalary is:%lf",hr1.salary);
	printf("\nCommision is:%lf\n",hr1.commision);
	
	printf("Details of HR 2\n");
	
	printf("HRid is:%d",hr2.HRId);
	printf("\nHRnname is:%s",hr2.HRName);
	printf("\nSalary is:%lf",hr2.salary);
	printf("\nCommision is:%lf\n",hr2.commision);
	
	printf("Details of HR 3\n");
	
	printf("HRid is:%d",hr3.HRId);
	printf("\nHRnname is:%s",hr3.HRName);
	printf("\nSalary is:%lf",hr3.salary);
	printf("\nCommision is:%lf\n",hr3.commision);

}