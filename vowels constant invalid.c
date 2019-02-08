#include <stdio.h>

int main()
{
    char ch;
    int no;
    scanf("%c",&ch);
    if(no>0 || no<0)
    {
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("%cit is vowel\n",ch);
    }
    else
    
        printf("%c,it is constant\n",ch);
    
}
else
printf("invalid");
return 0;
}
