//Ques3.Find sum of all numbers.

void main()
{
	int arr[5];
	int sum=0;
	
	printf("Enter element:");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
		printf("Sum of all is: %d ",sum);
}