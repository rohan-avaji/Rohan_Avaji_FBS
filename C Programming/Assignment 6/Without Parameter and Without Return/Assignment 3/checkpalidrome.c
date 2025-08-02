void checkpalidrome();
void main()
{
	checkpalidrome();//call
}
void checkpalidrome()//def
{
	int num=121;
	int temp=num;
	int rev=0;
	
	while(temp >0)
	{
		int sum=temp%10;
		rev = rev * 10 + sum;
		temp = temp/10;
	}
	
	if(rev==num)
	{
		printf("Palindrome number");
	}
	else
	{
		printf("Not palindrome number");
	}
}
