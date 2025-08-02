//Ques7. Take two array and add sum in third array
void addSumInThird(int* arr,int* brr,int* crr);//dec
void main()
{
	int arr[5]={1,2,3,4,5};
	int brr[5]={10,20,30,40,50};	 
	int crr[5];
	
	addSumInThird(arr,brr,crr);//call
}
void addSumInThird(int* arr,int* brr,int* crr)//def
{
	for(int i=0; i<5; i++)
		crr[i]=arr[i] + brr[i];
	
	printf("\n Arr={");
	for(int i=0; i<5; i++)
	{
		printf("%d ,",arr[i]);
	}
	printf("\b}");
	
	printf("\n Brr={");
	for(int i=0; i<5; i++)
	{
		printf("%d ,",brr[i]);
	}
	printf("\b}");
	
	printf("\n Crr={");
	for(int i=0; i<5; i++)
	{
		printf("%d ,",crr[i]);
	}
	printf("\b}");

}