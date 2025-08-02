int mystrcmp(const char* s1, const char* s2);
void main() 
{
    printf("%d\n", mystrcmp("abc", "abc"));  // 0
    printf("%d\n", mystrcmp("abc", "abd"));  // -1
    printf("%d\n", mystrcmp("abd", "abc"));  // 1
    
}

int mystrcmp(const char* s1, const char* s2)
{
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char*)s1 - *(unsigned char*)s2;
}
