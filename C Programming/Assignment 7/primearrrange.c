void main()
{
	int arr[10];
	printf("Enter a number:");
	int flag=1,i,j;
	
	for( int i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nPrime numbers in the array are:\n");
	for(int i=0; i<5; i++)
	{
		if(arr[i] <=1)
		{
			continue;
		}
		
		flag=1;
		for(int j=2; j<=arr[i]/2; j++)
		{
			if(arr[i] % j ==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("%d ",arr[i]);
	}
	
}