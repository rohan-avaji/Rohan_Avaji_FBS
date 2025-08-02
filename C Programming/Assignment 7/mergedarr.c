void main()
{
	int arr1[]={1,3,4,5,6,7};
	int arr2[]={7,9,2};
	int s1=6, s2=3;
	
	int merged[30];
	for(int i=0; i<s1; i++)
	{
		merged[i]=arr1[i];
	}
	for(int i=0; i<s2; i++)
	{
		merged[s1 + i]=arr2[i];
	}
	
	printf("\nMerged array:\n");
	for(int i=0; i<s1 + s2; i++)
	{
		printf("%d ",merged[i]);
	}
}