void main()
{
	char str[10];
	printf("Enter string");
	scanf("%s",str);
	
	int count=0;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
		{
			count++;
		}
		i++;
	}
	printf("Count of word: %d",count);


}