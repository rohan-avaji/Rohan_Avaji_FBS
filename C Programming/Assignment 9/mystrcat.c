void main() 
{
    char dest[100] = "Hello, ";
    char src[] = "World!";
    mystrcat(dest, src);
    printf("Concatenated: %s\n", dest);
}

int mystrlen(const char* str) 
{
    int len = 0;
    while (*str++) len++;
    return len;
}

char* mystrcat(char* dest, const char* src)
{
    char* ptr = dest + mystrlen(dest);
    while (*src) {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}