#include <stdio.h>
#include <stdbool.h>
#include "force_sthene_ui.h"
#include "utility.h"

void display_force_sthene_menu()
{
    printf("Please select the unit you want to convert to Sthène:\n");
    printf("D. Dyne\n");
    printf("K. Kilopond\n");
    printf("N. Newton\n");
    printf("X. Exit\n");
}

void select_force_sthene_menu_option()
{
    char selection;
    bool is_exited = false;
    do
    {
        display_force_sthene_menu();
        printf("Enter your selection: ");
        selection = get_choice();
        switch (selection)
        {
        case 'D':
        case 'd':
            printf("Dyne selected\n");
            // enter amount in Dyne
            printf("Enter the amount in Dyne: ");
            float value = get_value();
            //DUMMY PRINT STATEMENT TO TEST VALUE
            printf("You entered: %f\n", value);
            // Call force conversion function
            break;
        case 'K':
        case 'k':
            printf("Kilopond selected\n");
            // enter amount in Kilopond
            printf("Enter the amount in Kilopond: ");
            value = get_value();
            //DUMMY PRINT STATEMENT TO TEST VALUE
            printf("You entered: %f\n", value);
            // Call force conversion function
            break;
        case 'N':
        case 'n':
            printf("Newton selected\n");
            // enter amount in Newton
            printf("Enter the amount in Newton: ");
            value = get_value();
            //DUMMY PRINT STATEMENT TO TEST VALUE
            printf("You entered: %f\n", value);
            // Call force conversion function
            break;
        case 'X':
        case 'x':
            printf("Exiting force conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}

