void checkprimenum();//dec
void main()
{
	checkprimenum();//call
}
void checkprimenum()//def
}
	int num=21;
	int i=2;
	int flag=1;
	if(num <=1)
	{
		printf("Not a prime num");
		return;
	}
	
	while(i < num)
	{
		if(num % i==0)
		{
			flag=0;
			break;
		}
		i++;
	}
	
	if(flag==1)
	{
		printf("Prime num");
	}
	else
	{
		printf("Not a prime num");
	}
}