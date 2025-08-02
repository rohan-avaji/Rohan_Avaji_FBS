int evenodd();//dec
void main()
{
	evenodd();//call
}

int evenodd()//def
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("Even no.");
	}
	else
	{
		printf("Odd no.");
	}
}