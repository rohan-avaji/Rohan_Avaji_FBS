void sumofrange();//dec
void main()
{
	sumofrange();//call
}
void sumofrange()//def
{
	int start=3, end=5;
	int sum=0;
	while(start<=end)
	{	
		sum= sum + start;
		start++;
	}
	printf("Sum of range is: %d\n", sum);
}