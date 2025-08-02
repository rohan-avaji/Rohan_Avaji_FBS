int uprlwr();//dec
void main()
{
	uprlwr();//call
}

int uprlwr()//def
{
	int cases = 'G';
	
	if(cases >= 'A' && cases <= 'Z')
	{
		printf("Uppercase");
	}
	else
	{
		printf("Lowercase");
	}
}