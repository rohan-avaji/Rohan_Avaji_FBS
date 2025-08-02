//Ques1.. Find minimum and maximum number in array with func

int maxmin(int* , int , int );//dec
void main()
{
	int arr[10];
	int max;
	int min;
	printf("Enter element:");
	
	for(int i=1; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	maxmin(arr, max, min);//call

}
int maxmin(int* arr, int max, int min)//def
{
	max=arr[1];
	for(int i=1; i<10; i++)
	{
		if(arr[i] > max)
			max=arr[i];
	}
	
	min=arr[1];
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