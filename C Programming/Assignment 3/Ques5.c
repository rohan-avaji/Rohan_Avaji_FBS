void main()
{
	int num=153;
	int temp=num, sum=0, digit;
	
	while(num!=0)
	{
		digit=num%10;
		sum=sum + (digit * digit * digit);
		num=num/10;
	}
	
	if(sum == temp)
	{
		printf("%d is an Armstrong num.",temp);
	}
	else
	{
		printf("%d is Not an Armstrong num.",temp);
	}
}