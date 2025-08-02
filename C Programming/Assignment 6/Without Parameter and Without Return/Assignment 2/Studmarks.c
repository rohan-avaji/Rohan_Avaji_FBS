void studmarks();//dec
void main()
{
	studmarks();//call
}
void studmarks()//def
{
	int marks;
	printf("Enter the marks:");
	scanf("%d",&marks);
	
	if(marks >= 75)
	{
		printf("Marks is 75 above -> Distinction");
	}
	else if(marks >= 65)
	{
		printf("Marks is 65 above -> Final Class");
	}
	else if(marks >= 55)
	{
		printf("Marks is 55 above -> Second Class");
	}
	else if(marks >= 35)
	{
		printf("Marks is 40 above -> Pass Class");
	}
	else if(marks <= 35)
	{
		printf("Marks is less than 35 -> Fail");
	}
	else
	{
		printf("Not in memory");
	}
}