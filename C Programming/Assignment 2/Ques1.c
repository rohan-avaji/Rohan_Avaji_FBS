#include<Stdio.h>
void main()
{
	int num1, num2;
	int res;
	char oper;
	
	printf("Enter the number:");
	scanf("%d%d",&num1,&num2);
	fflush(stdin);
	
	printf("Enter a operator(+ - * /):");
		res = num1 + num2;
		printf("%d",res);
	}
	else if(oper=='-')
	{
		res = num1 - num2;
		printf("%d",res);
	}
	else if(oper=='*')
	{
		res = num1 * num2;
		printf("%d",res);
	}
	else if(oper=='/')
	{
		res = num1 / num2;
		printf("%d",res);
	}
	else
	{
		printf("Invalid no");
	}
	
}