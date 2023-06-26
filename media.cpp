/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b;
    float media;
    printf("nota 1 \n");
    scanf("%d", &a);
    printf("nota 2 \n");
    scanf("%d", &b);
    media = (a + b)/2;
    if (media>=6){
        printf("aprovado");
    }
    else if(media>=4){
        printf("direito a recuperar");
    }
    else{
        printf("reprovado");
    }
   
}
