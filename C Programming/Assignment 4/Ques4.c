//Ques4.Print strong numbers in the given range 1 to n.

void main()
{
	int num, dig, sum=0, factorial=1;
	int temp;
	printf("Enter a value of num.");
	scanf("%d",&num);
	
	printf("Strong number between 1 and %d are:",num);
	
	for(int i=1; i<=num; i++)
	{
		temp=i;
		sum=0;
		while(temp > 0)
		{
			dig = temp%10;
			
			factorial=1;
			for(int j=1; j<=dig; j++)
			{
				factorial = factorial*j;
			}
			sum = sum + factorial;
			temp = temp/10;
		}
			if(sum == i)
			{
				printf("%d ",i);
			}
	}
}