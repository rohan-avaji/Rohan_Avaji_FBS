void main()
{
	int num;
	printf("Enter a number.");
	scanf("%d",&num);
	
	if(num > 0 )
	{
		printf("is a Positive num.");
	}
	else if(num < 0)
	{
		printf("is a Negitive num.");
	}
	else 
	{
		printf("is a Neutral num.");
	}
}