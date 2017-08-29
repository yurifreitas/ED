#include <stdio.h>
#include <stdio_ext.h>


void main(){

char c1,c2;
scanf("%c",&c1);
__fpurge(stdin);
scanf("%c",&c2);
printf("(%c)(%c)",c1,c2);






}