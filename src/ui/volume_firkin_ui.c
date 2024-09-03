#include <stdio.h>
#include <stdbool.h>
#include "volume_firkin_ui.h"
#include "utility.h"

void display_volume_firkin_menu()
{
    printf("Please select the unit you want to convert to Firkin:\n");
    printf("M. Minim\n");
    printf("P. Peck\n");
    printf("L. Litre\n");
    printf("X. Exit\n");
}

void select_volume_firkin_menu_option()
{
    char selection;
    bool is_exited = false;
    do
    {
        display_volume_firkin_menu();
        printf("Enter your selection: ");
        selection = get_choice();
        switch (selection)
        {
        case 'M':
        case 'm':
            printf("Minim selected\n");
            // enter amount in Minim
            printf("Enter the amount in Minim: ");
            float value = get_value();
            //DUMMY PRINT STATEMENT TO TEST VALUE
            printf("You entered: %f\n", value);
            // Call volume conversion function
            break;
        case 'P':
        case 'p':
            printf("Peck selected\n");
            // enter amount in Peck
            printf("Enter the amount in Peck: ");
            value = get_value();
            //DUMMY PRINT STATEMENT TO TEST VALUE
            printf("You entered: %f\n", value);
            // Call volume conversion function
            break;
        case 'L':
        case 'l':
            printf("Litre selected\n");
            // enter amount in Litre
            printf("Enter the amount in Litre: ");
            value = get_value();
            //DUMMY PRINT STATEMENT TO TEST VALUE
            printf("You entered: %f\n", value);
            // Call volume conversion function
            break;
        case 'X':
        case 'x':
            printf("Exiting volume conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}