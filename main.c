#include <stdio.h>
#include "stack.h"
/**/
int main(int argc, char *argv[])
{
    int buf[16];
    Range range = {0,9};
    Validator validator = rangeValidator(&range);

    Stack stack=newStackWithValidator(buf,&validator);
    push(&stack,9);
    int reval=0;
    pop(&stack,&reval);

    printf("%d\n",reval);
    return 0;
}
