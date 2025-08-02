char* mystrncpy(char* dest, const char* src, int n);//dec
void main() 
{
    char src[] = "Programming";
    char dest[20];

    mystrncpy(dest, src, 5);//call
    dest[5] = '\0';

    printf("Copied: %s\n", dest);
}

char* mystrncpy(char* dest, const char* src, int n) //def
{
    int i;
    for (i = 0; i < n && src[i]; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

