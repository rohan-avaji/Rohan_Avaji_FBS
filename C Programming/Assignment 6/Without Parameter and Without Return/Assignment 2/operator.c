#include<Stdio.h>
void numoperator();//dec
void main()
{	
	numoperator();//call

}

void numoperator()//def
{
	int num1, num2;
	int res;
	char oper;
	
	printf("Enter the number:");
	scanf("%d%d",&num1,&num2);
	fflush(stdin);
	
	
	printf("Enter a operator (+ - * /):");
	scanf("%c", &oper);
		
	if(oper=='+')
	{ 
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