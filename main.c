/* 
 * File:   main.c
 * Author: Suthan Sivamayam
 *
 * Created on September 26, 2017, 9:37 AM
 */

#include <stdio.h>
#include <stdlib.h>

/* function Declarations*/
void tutorial64();
void tutorial62();
void tutorial60();
void tutorial58();
void tutorial57();
void tutorial56();
void tutorial55();
void tutorial54();
void tutorial53();
void tutorial51();
void tutorial49();

/*function declaration ends*/

/*
 * 
 */
int main(int argc, char** argv) {
    
    //tutorial49();
    //tutorial51();
    //tutorial53();
    //tutorial54();
    //tutorial55();
    //tutorial56();
    //tutorial57();
    //tutorial58();
    //tutorial60();
    //tutorial62();
    tutorial64();
    return (EXIT_SUCCESS);
}
/**
 * Tutorial Naresh IT
 * Answer is 35 - Hexadecimal representation of 53; %o - octal number
 */
void tutorial49(){
    int a = 53;
    printf("%x",a);
}
/**
 * Tutorial Naresh IT
 * Print a hexadecimal in to base 10
 * "%#x" prints the same format (ox20)
 */
void tutorial51(){
    int a = 0x20;
    printf("%d",a);
}

/**
 * printf returns the number of characters it prints; 
 * in this example 5
 */
void tutorial53(){
    int x;
    x = printf("Hello");
    printf("%d",x);
}

/**
 * Prints 2; number of inputs, received form user. 
 */
void tutorial54(){
    int a, b, c;
    c = scanf("%d %d",&a, &b);
    printf("%d",c);
}

/**
 * This case, prints K; 10 th character from A(65).
 */
void tutorial55(){
    char a = 'A';
    printf("%c",a+10);    
}

/**
 * a has the last number. In this example x has 7
 */
void tutorial56(){
    int a;
    a = (1,2,3,4,5,7);
    printf("%d", a);
}

/**
 * output is 25 for this problem; j = (i = i+2,i = i +6, i +12);
 * first step i=i +2 (now i is 7), i = i + 6 (now 13), then j = i + 12 (now 25)
 */
void tutorial57(){
    int i = 5,j;
    j = (i = i+2,i = i +6, i +12);
    printf("%d",j);
}
/**
 * logical exp. returns true(1) or false(0);
 * in this evaluation -5 && 5 both are true (non zeros are treated as a true 
 * value)
 * 5 && 0 gives 0
 */
void tutorial58(){
    printf("%d", -5 && 0);
}

/**
 * a has the first number. bz assignment is first then evaluations
 * In this example x has 1
 * check the tutorial 56
 */
void tutorial60(){
    int a;
    a = 1,2,3,4,5,7;
    printf("%d", a);
}

/**
 * non zeros are true (1) so !!x is 1
 */
void tutorial62(){
    int x = 3, y = 0, a;
    a = !!x + !y;
    printf("%d", a);
}

/**
 * output: 1, -1, 1, -1
 */
void tutorial64(){
    printf("%d \n", 5%2);
    printf("%d\n", -5%2);
    printf("%d\n", 5%-2);
    printf("%d\n", -5%-2);
    //printf("%d\n", 5.0%2);
    //printf("%d\n", 5%2.0);
}
