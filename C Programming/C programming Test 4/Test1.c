//Ques1: WAP to print facotrs of number in given range.


void main()
{
	int num1, num2;
	printf("Enter a number:");
	scanf("%d %d",&num1, &num2);
	
	for(int i=num1; i<=num2; i++)
	{
		printf("%d=",i);
		for(int j=1; j<=i; j++)
		{
			if(i % j==0)
			{
				printf("%d, ",j);
			}
		}
	}
	
	
}