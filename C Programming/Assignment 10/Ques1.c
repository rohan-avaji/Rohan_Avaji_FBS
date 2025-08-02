//Quesa. mystrcpy
char* mystrcpy(char*, char*);//dec
void main()
{
	char src[10]="Rohan";
	char dest[10];
	
	mystrcpy(src, dest);//call
	printf("Copied dest:%s",dest);
}

char* mystrcpy(char* src, char* dest)//def
{
	int i=0;
	while(src[i]!='\0')
	{
		dest[i]=src[i];
		
		i++;
	}
	dest[i];
	return dest[i]='\0';
}