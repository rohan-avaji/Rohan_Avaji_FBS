char* mystrrev(char* str); //dec
void main() 
{
    char str[] = "abcdef";
    mystrrev(str);//call
    printf("Reversed: %s\n", str);

}

int mystrlen(const char* str) 
{
    int len = 0;
    while (*str++) len++;
    return len;
}

char* mystrrev(char* str) 
{
    int len = mystrlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

