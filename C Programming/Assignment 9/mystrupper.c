char* mystrupper(char* str);//dec

void main() 
{
    char str[] = "hello World";
    mystrupper(str);//call
    printf("Uppercase: %s\n", str);
    
}

char* mystrupper(char* str) //def
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;
}
