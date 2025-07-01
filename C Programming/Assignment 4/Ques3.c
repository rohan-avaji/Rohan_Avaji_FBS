//Ques3.Print perfect numbers in the given range 1 to n.

void main()
{
	int num;
	printf("Enter a value of num: ");
	scanf("%d",&num);
	
	printf("Perfect number between 1 and %d are:",num);
	for(int i=1; i<=num; i++)
	{	
	 	int sum=0;
		int j=1;
		while(j <=i/2)
		{
				if(i % j==0)
			{
				sum=sum+j;
			}
		j++;
		}
			if(sum == i)
			{
				printf("%d ,",i);
			}
	}
			
}