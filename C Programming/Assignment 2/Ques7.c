void main()
{
	int age;
	printf("Enter age:");
	scanf("%d", &age);
	
	if(age > 0 && age < 12)
	{
		printf("He/She is a child.");
	}
	else if(age > 12 && age < 19)
	{
		printf("He/She is a Teenager.");
	}
	else if(age > 20 && age < 59)
	{
		printf("He/She is a Adult.");
	}
	else
	{
		printf("He/She is a Senior.");
	}
}