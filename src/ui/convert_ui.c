#include <stdio.h>
#include <stdbool.h>
#include "convert_ui.h"
#include "pressure_ui.h"
#include "volume_ui.h"
#include "force_ui.h"
#include "utility.h"


void display_intro()
{
    printf("Welcome to the temperature conversion program\n");
    printf("This program will convert various rather obscure units of pressure, volume and force.\n");
}

void display_convert_menu()
{
    printf("Please select from the following menu options:\n");
    printf("P. Pressure\n");
    printf("V. Volume\n");
    printf("F. Force\n");
    printf("X. Exit\n");
}

void select_convert_menu_option()
{
    char selection;
    bool is_exited = false;
    do
    {
        display_convert_menu();
        printf("Enter your selection: ");
        selection = get_choice();
        switch (selection)
        {
        case 'P':
        case 'p':
            printf("Pressure conversion selected\n");
            select_pressure_menu_option();
            break;
        case 'V':
        case 'v':
            printf("Volume conversion selected\n");
            select_volume_menu_option();
            break;
        case 'F':
        case 'f':
            printf("Force conversion selected\n");
            select_force_menu_option();
            break;
        case 'X':
        case 'x':
            printf("Exiting program\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}