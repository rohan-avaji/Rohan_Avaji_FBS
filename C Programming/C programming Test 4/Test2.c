//Ques2: WAP to find power of any number.

void main()
{
	int num1;
	int num2;
	printf("Enter a number of 1:");
	scanf("%d %d",&num1,&num2);
	
	int sum=pow(num1,num2);
	printf("The sum of using pow function is :%d",sum);
	int result=1;
	for(int i=1; i<num2; i++)
	{
		result=result * num1;
	}
	
}