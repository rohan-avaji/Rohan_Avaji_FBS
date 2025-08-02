void main()
{
	leapyear();//call
}

leapyear()//def
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Not a leap year");
	}
}