//Q3. Print last 2 digit of number.
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	int lasttwodigit;
	
	lasttwodigit = num % 100;
	printf("The last digit of %d is:%d",num,lasttwodigit);
	
}