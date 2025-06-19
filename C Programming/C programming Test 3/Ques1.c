//Ques1. WAP even and odd numbers in a given range.

void main()
{
	int start=10, end=25;
	
	printf("Odd num is:");
	for(int i=10; i<25; i++)
	{
		if(i%2!=0)
			printf("%d ",i);
	}
	printf("\n");
	
	int start1=1, end1=15;
	
	printf("Even num is:");
	for(int i=1; i<15; i++)
	{
		if(i%2==0)
			printf("%d ",i);
	}
}