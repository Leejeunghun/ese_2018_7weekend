#include<stdio.h>
#include"func1.h"
#include"func2.h"
void preprocess()
{
    printf("preprocess doing\n");
}

void main()
{
     preprocess();
     foo();
     goo();
}	
