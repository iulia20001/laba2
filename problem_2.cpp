#include < stdio.h >
#include < ctype.h >
 
int main(void)
{
    int c = getchar();
    printf("%s\n",
    isdigit(c) ? "DIGIT" :
    isupper(c) ? "CAPITAL" :
    islower(c) ? "LOWERCASE" : "NON-ALPHANUMERIC");
    return 0;
}
