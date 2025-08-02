//Quesd. mystrcat
#include<stdio.h>
void mystrcat(char* , char* );//dec
void main()
{
	char str1[20];
	printf("Enter a string1:");
	scanf("%s",str1);
	
	char str2[20];
	printf("Enter a string2:");
	scanf("%s",str2);
	
	mystrcat(str1, str2);//call
	printf("Concatination of string is:%s\n",str1);
	
}

void mystrcat(char* str1, char* str2)//def
{
	int i=0, j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
}