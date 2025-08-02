//Quesb. mystrlen

int mystrlen(char* );//dec
void main()
{
	char chlen[10]="Rohan";
	
	int res=mystrlen(chlen);//call
	printf("Length is = %d",res);
}

int mystrlen(char* chlen)//def
{
	int i=0;
	while(chlen[i]!='\0')
	{
		i++;
	}
	return i;

}