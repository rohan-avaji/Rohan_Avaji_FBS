int checkpalindrome();//dec
void main()
{
	
	checkpalindrome();//call
}

int checkpalindrome()//def
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	int temp=num;
	int rev=0;
	
	while(temp > 0)
	{
		int sum=temp%10;
		rev=rev * 10 + sum;
		temp=temp/10;
	}
	
	if(rev==num)
	{
		printf("Palindrome number");
	}
	else
	{
		printf("Not a palindrome number");
	}
}