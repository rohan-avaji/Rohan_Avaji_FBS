int mystrcasecmp(const char* s1, const char* s2);
void main() 
{
    printf("%d\n", mystrcasecmp("Hello", "hello"));  
    printf("%d\n", mystrcasecmp("aBc", "ABC"));      
    printf("%d\n", mystrcasecmp("abc", "xyz"));      
    return 0;
}

int mystrcasecmp(const char* s1, const char* s2)
{
    while (*s1 && *s2) {
        char c1 = (*s1 >= 'A' && *s1 <= 'Z') ? *s1 + 32 : *s1;
        char c2 = (*s2 >= 'A' && *s2 <= 'Z') ? *s2 + 32 : *s2;
        if (c1 != c2)
            return c1 - c2;
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
