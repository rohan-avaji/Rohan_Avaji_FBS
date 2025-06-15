void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	int i=1;
	int factorial=1;
	
	while(i <= num)
	{
		factorial=factorial*i;
		i++;
	}
	printf("Factorial of number %d is: %d",num,factorial);
}