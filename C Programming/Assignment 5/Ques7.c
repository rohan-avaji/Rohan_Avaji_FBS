//Ques7. Print a Floyd’s triangle pattern

void main()
{
	int n;
	int num=1;

    printf("Enter number of rows: ");
    scanf("%d", &n);
	
	  printf("Floyd’s Triangle:\n");
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}