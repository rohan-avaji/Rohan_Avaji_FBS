void main()
{
	int num;
	printf("Enter num:");
	scanf("%d",&num);
	
	int term=0;
	for(int i=0; i<num; i++)
	{
		term=term * 10 + 1;
		printf("%d",term );
		
		if(i != num)
		{
			printf("+");
		}	
	}
	
}