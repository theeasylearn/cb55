// write a program to print ascii table of a to z
//  here we learnt that ascii value of a 97, b 98 and so on z = 122
#include <stdio.h>
void main()
{
    int ascii;
    char letter;

    for(ascii = 97;ascii<=255;ascii++)
    {
        letter = ascii; // store character code of value in ascii variable
        printf("\n %c = %d", letter, ascii);
    }
}