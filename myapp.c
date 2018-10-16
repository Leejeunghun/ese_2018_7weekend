#include<stdio.h>
#include"func1.h"
#include"func2.h"

void preprocess()
{
    printf("preprocess doing\n");
}
void postprocess()
{
    printf("post\n");
}
void turbo_on()
{
   printf("i one func\n");

}


void main()
{
    preprocess();
    turbo_on();
     foo();
     goo();
     postprocess();
}	
