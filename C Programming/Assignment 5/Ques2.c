//Ques2. Print a right-angled triangle pattern

void main()
{
		int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);
	
	printf("Right-angled triangle pattern:\n");
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}