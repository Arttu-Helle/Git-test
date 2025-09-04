#include <stdio.h>
#include <stdlib.h>
#include "Untitled1.h"

int main()
{

    int a;
    int b;
    char answer;



    printf("Give me a ");
    scanf("%d", &a);
    printf("Give me b ");
    scanf("%d", &b);
    printf("Do you want Circ. (a) or Area (b)? ");
    scanf(" %c", &answer);
    if (answer == 'a' || answer == 'A')
        printf("%d\n",2*a + 2*b);
    else if (answer == 'b' || answer == 'B')
        printf("%d\n",a*b);
    else
        printf("Try again\n");

    printf("%d",sizeof(a));

    char str [80];
    unsigned short int age;

    printf("\nEnter your name: ");
    scanf(" %s", &str);
    printf("Enter your age: ");
    scanf(" %hu", &age);
    printf("You %s, are %hu yo", str, age);



return 0;




    }
