#include <stdio.h>
#include <stdbool.h>
#include "pressure_ui.h"
#include "utility.h"

void display_pressure_menu()
{
    // units of pressure: Millimeter of mercury (mmHg), Inch of water (inH2O) and Torr
    printf("Please select from the following pressure units:\n");
    printf("M. Millimeter of mercury (mmHg) \n");
    printf("I. Inch of water (inH2O)\n");
    printf("T. Torr\n");
}

void select_pressure_menu_option()
{
    char selection;
    bool is_exited = false;
    do
    {
        display_pressure_menu();
        printf("Enter your selection: ");
        selection = get_choice();
        switch (selection)
        {
        case 'M':
        case 'm':
            printf("Millimeter of mercury (mmHg) selected\n");
            select_pressure_mmHg_menu_option();
            break;
        case 'I':
        case 'i':
            printf("Inch of water (inH2O) selected\n");
            select_pressure_inH2O_menu_option();
            break;
        case 'T':
        case 't':
            printf("Torr selected\n");
            select_pressure_torr_menu_option();
            break;
        case 'X':
        case 'x':
            printf("Exiting pressure conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}



