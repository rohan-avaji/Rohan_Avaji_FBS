void main()
{
	int num = 456;
	int num1, num2, num3;
	int store1;
	int reverse;
	
	num1 = num%10;
	store1 = num/10;
	num2 = store1%10;
	num3 = store1/10;
	
	reverse = num1 * 100+ num2 * 10+ num3;
	
	if(reverse==num)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
}