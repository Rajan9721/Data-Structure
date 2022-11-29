#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("\n Please Enter any String  :  ");
    scanf("%s", str);
        
    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%d = %c \n", i, str[i]);
    }
    return 0;
}
