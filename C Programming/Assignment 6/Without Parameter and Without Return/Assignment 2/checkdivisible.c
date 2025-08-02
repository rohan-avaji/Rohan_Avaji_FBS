void main()
{
	
	checkdivisible();//call
}
void checkdivisible()//def
{
	int a = 2;
	if(a%3==0 && a%5!=0)
	{
		printf("%d divisible by 3 but not 5",a);
	}
	else if(a%3!=0 && a%5==0)
	{
		printf("%d divisible by 5 but not 3",a);
	}
	else if(a%3==0 && a%5==0)
	{
		printf("%d divisible by both",a);
	}
	else
	{
		printf("%d Divisible by none",a);
	}
}