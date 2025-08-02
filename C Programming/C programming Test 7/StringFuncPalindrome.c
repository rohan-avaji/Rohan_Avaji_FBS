void checkPalindrome(char* , char* );//dec
void main()
{
	char str[20], rev[20];
	printf("Enter string:");
	scanf("%s",str);
	
	checkPalindrome(str, rev);//call
}

void checkPalindrome(char* str, char* rev)//def
{
	
	int len=strlen(str);
	int i;
	for(int i=0; i<len; i++)
	{
		rev[i]=str[len-i-1];
	}
	rev[len]='\0';
	if(strcmp(str, rev)==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palidrome");
	}
}