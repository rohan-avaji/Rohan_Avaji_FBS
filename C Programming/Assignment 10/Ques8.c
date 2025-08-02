//Quesh. mystrrev

char mystrrev(char* str);//def
void main()
{
	char str[10];
	printf("Enter a string:");
	gets(str);
	
	mystrrev(str);//call
	printf("Reversed string:%s",str);
}

char mystrrev(char* str)//def
{
	int size=0;
	while(str[size]!=0)
	{
		size++;
	}
		int i=0, j= size - 1;
		char temp;
		while(i < j)
		{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			i++;
			j--;
		}
	
}