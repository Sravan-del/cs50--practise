#include<stdio.h>
#include<cs50.h>

int main(void)

{
    int x = get_int("What is the number?");
    int y = get_int("What is the other one?");
    char k = get_char("Which operation do you want?(+,-,/,*)\n");
    if (k== '+')
    {
        printf("%i\n",x+y);
    }
    else if (k=='-')
    {
        printf("%i\n",x-y);
    }
    else if(k=='*')
    {
        printf("%i\n", x*y);
    }
    else
    {
        printf("%i\n",x/y);
    }



}
