//Quesc. mystrcmp
int mystrcmp(char* , char* );//dec
void main()
{
	char str1[]="First";
	char str2[]="Second";
	
	int res=mystrcmp(str1, str2);//call
	
	if(res == 0)
	{
		printf("Strings are equal");
	}
	else if(res < 0)
	{
		printf("str1 is less than str2\n");
	}
	else 
	{
		printf("str1 is greater than str2\n");
	}
	
}

int mystrcmp(char* str1, char* str2)//def
{
	int i=0;
	while(str1[i] !='\0' && str2[i] !='\0')
	{
		str1[i] == str2[i];
		i++;
	}
	return str1[i] - str2[i];
}