char vowel();//dec
void main() 
{
    vowel();//call
}

char vowel()//def
{
	char cha = 'a';

    if (cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u' ||
        cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U') 
	{
        printf("It is a vowel.");
    } 
	else 
	{
        printf("It is a consonant.");
    }
}
