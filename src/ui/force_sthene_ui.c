#include <stdio.h>
#include <stdbool.h>
#include "force_ui.h"
#include "utility.h"
#include "force.h"

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
    float value;
    float result;
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
            printf("Enter the amount in Dyne: ");
            value = get_value();
            result = dyne_to_sthene(value);
            printf("%f Dyne is equal to %f Sthène\n", value, result);
            break;
        case 'K':
        case 'k':
            printf("Kilopond selected\n");
            // enter amount in Kilopond
            printf("Enter the amount in Kilopond: ");
            value = get_value();
            result = kilopond_to_sthene(value);
            printf("%f Kilopond is equal to %f Sthène\n", value, result);
            break;
        case 'N':
        case 'n':
            printf("Newton selected\n");
            // enter amount in Newton
            printf("Enter the amount in Newton: ");
            value = get_value();
            result = newton_to_sthene(value);
            printf("%f Newton is equal to %f Sthène\n", value, result);
            break;
        case 'X':
        case 'x':
            printf("Exiting Sthène conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}

