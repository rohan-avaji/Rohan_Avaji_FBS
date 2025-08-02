char* mystrchr(const char* str, int ch);
void main() 
{
    char str[] = "abcdefabc";
    char* pos = mystrchr(str, 'c');

    if (pos)
        printf("First 'c' at: %s\n", pos);
    else
        printf("Character not found\n");

}

char* mystrchr(const char* str, int ch)
{
    while (*str) {
        if (*str == (char)ch)
            return (char*)str;
        str++;
    }
    return NULL;
}

