//Ques2. WAP to add alternate numbers from given range.

void main()
{
	int start=1, end=5;
	int sum=0;
	
	for(int i=1; i<=end; i++)
	{
		printf("\nAlternate num is:%d",i);
		
		sum=sum+i;
		i++;
	}
	printf("\nSum of alternate num is: %d \n",sum);	
}
	
