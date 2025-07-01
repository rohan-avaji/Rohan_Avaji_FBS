//Ques6. Print a half pyramid using numbers

void main()
{
	int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);
	
	printf("Half pyramid pattern:\n");
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
