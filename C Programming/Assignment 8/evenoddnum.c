//Ques4. Find odd and even among the numbers

void oddevenNum(int* arr);//dec
void main()
{
	int arr[20];
	printf("Enter element:");
	
	oddevenNum(arr);//call
}
void oddevenNum(int* arr)//def
{
	
	for(int i=0; i<20; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\nOdd and Even number check:\n");
	for(int i=0; i<20; i++)
	{
		if(arr[i]%2==0)
		{
			printf(" %d is Even num ,",arr[i]);
		}
		else
		{
			printf(" %d is Odd num ,",arr[i]);
		}
	}
}