void main()
{
	int a=11;
	int b=11;
	int c=11;
	
	if(a == b && b == c)
	{
		printf("Equilateral");
	}
	else if(a == b || b == c || a == c)
	{
		printf("Isosceles");
	}
	else
	{
		printf("Scalen");
	}
}