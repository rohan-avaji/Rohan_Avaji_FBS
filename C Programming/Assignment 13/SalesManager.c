typedef struct SalesManager
{
	int SMId;
	char SMName[20];
	double salary;
	double incentive;
	int target;
}SalesManager;

#include<stdio.h>
void main()
{
	SalesManager sm1, sm2, sm3;
	
	printf("Details of SalesManager 1 \n");
	sm1.SMId;
	printf("SMid is:");
	scanf("%d",&sm1.SMId);
	
	sm1.SMName;
	printf("SMname is: ");
	scanf("%s",sm1.SMName);
	
	sm1.salary;
	printf("Salary is: ");
	scanf("%lf",&sm1.salary);
	
	sm1.incentive;
	printf("incentive is: ");
	scanf("%lf",&sm1.incentive);
	
	sm1.target;
	printf("target is: ");
	scanf("%d",&sm1.target);
	
	printf("Details of SalesManager 2 \n");
	sm2.SMId;
	printf("SMid is:");
	scanf("%d",&sm2.SMId);
	
	sm2.SMName;
	printf("SMname is: ");
	scanf("%s",sm2.SMName);
	
	sm2.salary;
	printf("Salary is: ");
	scanf("%lf",&sm2.salary);
	
	sm2.incentive;
	printf("incentive is: ");
	scanf("%lf",&sm2.incentive);
	
	sm2.target;
	printf("target is: ");
	scanf("%d",&sm2.target);
	
	printf("Details of SalesManager 3 \n");
	sm3.SMId;
	printf("SMid is:");
	scanf("%d",&sm3.SMId);
	
	sm3.SMName;
	printf("SMname is: ");
	scanf("%s",sm3.SMName);
	
	sm3.salary;
	printf("Salary is: ");
	scanf("%lf",&sm3.salary);
	
	sm3.incentive;
	printf("incentive is: ");
	scanf("%lf",&sm3.incentive);
	
	sm3.target;
	printf("target is: ");
	scanf("%d",&sm3.target);
	
	printf("Details of SaleManager 1\n");
	
	printf("SMid is:%d",sm1.SMId);
	printf("\nSMname is:%s",sm1.SMName);
	printf("\nSalary is:%lf",sm1.salary);
	printf("\nIncentive is:%lf\n",sm1.incentive);
	printf("\nTarget is:%d",sm1.target);
	
	printf("Details of SaleManager 2\n");
	
	printf("SMid is:%d",sm2.SMId);
	printf("\nSMname is:%s",sm2.SMName);
	printf("\nSalary is:%lf",sm2.salary);
	printf("\nIncentive is:%lf\n",sm2.incentive);
	printf("\nTarget is:%d",sm2.target);
	
	printf("Details of SaleManager 3\n");
	
	printf("SMid is:%d",sm2.SMId);
	printf("\nSMname is:%s",sm2.SMName);
	printf("\nSalary is:%lf",sm2.salary);
	printf("\nIncentive is:%lf\n",sm2.incentive);
	printf("\nTarget is:%d",sm2.target);

}