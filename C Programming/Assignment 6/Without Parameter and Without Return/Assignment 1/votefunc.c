void main()
{
	vote();//call
}
vote()//def
{
	int age;
	printf("Enter a age:");
	scanf("%d",&age);
	
	if(age >= 18)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Not eligible to vote");
	}
}