#include <stdio.h>
#include "utility.h"

char get_choice() 
{
    char choice;
    scanf(" %c", &choice);
    return choice;
}

float get_value() 
{
    float value;
    scanf("%f", &value);
    return value;
}
