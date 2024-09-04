#include <stdio.h>
#include <stdbool.h>
#include "convert_ui.h"
#include "pressure_ui.h"
#include "volume_ui.h"
#include "force_ui.h"
#include "utility.h"


void display_convert_menu(bool is_first_time)
{
    clear_display();
    if (is_first_time)
    {
        printf("Welcome to the Unit Conversion Program\n");
        printf("This program will convert various rather obscure units of pressure, volume and force.\n\n");
    }
    
    printf("Main Menu\n");
    printf("---------------------------------------------------------\n");
    printf("Please select from the following menu options:\n");
    printf("P. Pressure\n");
    printf("V. Volume\n");
    printf("F. Force\n");
    printf("X. Exit\n");
}

void select_convert_menu_option(bool is_first_time)
{
    char selection;
    bool is_exited = false;
    do
    {
        display_convert_menu(is_first_time);
        is_first_time = false;
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