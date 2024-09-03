#include <stdio.h>
#include <stdbool.h>
#include "force_kp_ui.h"
#include "utility.h"

void display_force_kp_menu()
{
    printf("Please select the unit you want to convert to Kilopond:\n");
    printf("D. Dyne\n");
    printf("S. Sthene\n");
    printf("N. Newton\n");
    printf("X. Exit\n");
}

void select_force_kp_menu_option()
{
    char selection;
    bool is_exited = false;
    do
    {
        display_force_kp_menu();
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
        case 'S':
        case 's':
            printf("Sthène selected\n");
            // enter amount in Sthene
            printf("Enter the amount in Sthène: ");
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
            printf("Exiting Kilopond conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}