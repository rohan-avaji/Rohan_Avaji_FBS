//Ques2.Print prime numbers in the given range 1 to n.

void main()
{
	int num, n, i, temp;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	printf("Prime number between 1 to %d are: \n",n);
	
	//range of number
	for(i=1; i<=n; i++)
	{
		temp=i;
		num=i;
		
	// condition check
	if(num%2==0)
	{
		printf("%d ",num);
	}
	}
}