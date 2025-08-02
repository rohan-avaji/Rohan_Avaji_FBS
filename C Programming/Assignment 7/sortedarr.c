void main()
{
//	int arr[5];
//	int size=5;
//	
//	printf("Enter a number:");
//	for(int i=0; i<size; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	
//	for(int i=0; i<size - 1; i++)
//	{
//		for(int j=0; j<size-1-i; j++)
//		{
//			if(arr[j]> arr[j+1])
//			{
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//			}
//		}
//	}
//	
//	printf("Sorted array in ascending order:\n");
//	for(int i=0; i<size; i++)
//	{
//		printf("%d ",arr[i]);
//	}

	int arr[5];
	printf("Enter element:\n");
	int size=5;
	for(int i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<size-1; i++)
	{
		for(int j=i + 1; j<size; j++)
		{
			if(arr[j] < arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("sorted arr in asc order:");
	for(int i=0; i<size; i++)
	{
		printf("%d",arr[i]);
	}
}
