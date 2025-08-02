//Ques3.Find sum of all numbers.
void sumOfNum(int* arr, int sum);//dec
void main()
{
	int arr[5];
	int sum=0;
	
	sumOfNum(arr,sum);//call
}
void sumOfNum(int* arr, int sum)//def
{
	
	printf("Enter element:");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
		printf("Sum of all is: %d ",sum);
}