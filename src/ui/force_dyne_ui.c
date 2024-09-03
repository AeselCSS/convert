#include <stdio.h>
#include <stdbool.h>
#include "force_dyne_ui.h"
#include "utility.h"
#include "force.h"

void display_force_dyne_menu()
{
    printf("Please select the unit you want to convert to Dyne:\n");
    printf("K. Kilopond\n");
    printf("S. Sthène\n");
    printf("N. Newton\n");
    printf("X. Exit\n");
}

void select_force_dyne_menu_option()
{
    char selection;
    float value;
    float result;
    bool is_exited = false;
    do
    {
        display_force_dyne_menu();
        printf("Enter your selection: ");
        selection = get_choice();
        switch (selection)
        {
        case 'K':
        case 'k':
            printf("Kilopond selected\n");
            // enter amount in Kilopond
            printf("Enter the amount in Kilopond: ");
            value = get_value();
            result = kilopond_to_dyne(value);
            printf("%f Kilopond is equal to %f Dyne\n", value, result);
            break;
        case 'S':
        case 's':
            printf("Sthène selected\n");
            // enter amount in Sthene
            printf("Enter the amount in Sthène: ");
            value = get_value();
            result = sthene_to_dyne(value);
            printf("%f Sthène is equal to %f Dyne\n", value, result);
            break;
        case 'N':
        case 'n':
            printf("Newton selected\n");
            // enter amount in Newton
            printf("Enter the amount in Newton: ");
            value = get_value();
            result = newton_to_dyne(value);
            printf("%f Newton is equal to %f Dyne\n", value, result);
            break;
        case 'X':
        case 'x':
            printf("Exiting Dyne conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}