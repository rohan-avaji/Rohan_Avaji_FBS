//Ques2.Search the given number in array.
void searchNumber(int* arr);//dec
void main()
{
	int arr[5];
	printf("Enter element:");
	
	searchNumber(arr);//call
}
	
void searchNumber(int* arr)//def
{
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int element ,found =0;
	printf("Enter element you want to search: ");
	scanf("%d",&element);
	
	for(int i=0; i<5; i++)
	{
		if(arr[i]==element)
		{
			printf("Enter element found at index %d: ",i);
		found = 1;
		break;
		}
	}
	
	if(found ==0)
	{
		printf("Element not found");
	}
	
}