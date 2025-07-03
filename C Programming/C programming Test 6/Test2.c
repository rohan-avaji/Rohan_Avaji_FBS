//Ques2.WAP in C to find two maximum number in array
#include<stdio.h>
void main() {
	int arr[5];
	printf("Enter a number :");
	int i;
	for(int i=0; i<5; i++) 
	{
		scanf("%d",&arr[i]);
	}

	int max1=arr[0];

	for(int i=0; i<5; i++) 
	{
		if(arr[i] > max1)
		{
			max1=arr[i];
		}
	}
	
	int max2=-100;

	for(int i=0; i<5; i++)
	{
		if(arr[i] != max1 && arr[i] > max2)
		{
			max2=arr[i];
		}
	}
	
	printf("First maximum number is: %d\n",max1);
	printf("Second maximum number is: %d\n",max2);
}