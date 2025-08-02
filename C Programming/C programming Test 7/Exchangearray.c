
void exchangeArray(int* array, int position);//dec
void main()
{
	int arr[7];
	printf("Enter a number:");
	int position=0;
	for(int i=0; i<7; i++)
	{
		scanf("%d",arr[i]);
	}
	
	exchangeArray(arr,position);//call
	
	printf("Exchange the data of Xth position to Yth position:");
}

void exchangeArray(int* array, int position)//def
{
	int xth=3;
	int yth=5;
	int i=0;
	for(int j=position; j<=array[i]; j++)
	{
		if(position==3)
		{
			xth=array[i];
			printf("The exchange the data of Xth position:%d",xth);
		}
		else if(position==5)
		{
			yth=array[i];
			printf("The exchange the data of Xth position:%d",xth);
		}
		else
		{
			printf("Not found");
		}
	}
}