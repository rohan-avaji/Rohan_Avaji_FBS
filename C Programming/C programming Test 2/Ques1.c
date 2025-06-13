//WAP to calculate electricity bill.
void main()
{
	int units;
	printf("Enter a units: ");
	scanf("%d",&units);
	int res;
	
	if(units >= 1 && units <= 50)
	{
		res = units * 30;
		printf("Per unit of 30 is:\n");
	}
	else if(units >= 51 && units <= 150)
	{
		res = units * 40;
		printf("Per unit of 40 is:\n");
	}
	else if(units >= 151)
	{
		res = units * 50;
		printf("Per unit of 50 is:\n");
	}
	else
	{
		printf("Invalid unit");
	}
	printf("Total amount of electricity bill on unit are :%d",res);
}