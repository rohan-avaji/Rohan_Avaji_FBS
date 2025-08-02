void main()
{
	int arr[5];
	int size=5;
	
	printf("Enter element:");
	
	for(int i=size-1; i>=0; i--)
	{
		scanf("%d",arr[i]);
	}
	
	printf("Reverse element\n");
	
	for(int i=size-1; i>=0; i--)
	{
		printf("%d",arr[i]);
	}
}