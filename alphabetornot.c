#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("it is alphebet\n");
    }
     else
    
        printf("No\n");
    return 0;
}
