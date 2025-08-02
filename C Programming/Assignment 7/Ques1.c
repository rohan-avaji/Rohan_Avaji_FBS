//Ques1.. Find minimum and maximum number in array

void main()
{
	int arr[10];
	printf("Enter element:");
	
	for(int i=1; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int max=arr[1];
	for(int i=1; i<10; i++)
	{
		if(arr[i] > max)
			max=arr[i];
	}
	
	int min=arr[1];
	for(int i=1; i<10; i++)
	{
		if(arr[i] < min)
			min=arr[i];
	}
	
	for(int i=1; i<10; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n Maximum element is: %d",max);
	printf("\n Minimum element is: %d",min);
}