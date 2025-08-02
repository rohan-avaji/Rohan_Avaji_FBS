//Quesf. mystrlower
#include<stdio.h>
char mystrupr(char* );//dec
void main()
{
	char ch[20];
	printf("Enter character:");
	scanf("%s",ch);
	
	mystrupr(ch);//call
	printf("Converted to Lower case:%s",ch);
}

char mystrupr(char* ch)//def
{
	int i=0;
	while(ch[i]!='\0')
	{
		if(ch[i] >= 'A' || ch[i] <='Z')
		{
			ch[i]=ch[i] + 32;
		}
	i++;
	}
}