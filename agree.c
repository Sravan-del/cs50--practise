#include<stdio.h>
#include<cs50.h>

int main(void)

{
    char c = get_char("Do you agree?");

    if (c== 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n')
    {
        printf("Disagree.\n");
    }
    else
    {
        printf("cant give an answer\n");
    }
}
