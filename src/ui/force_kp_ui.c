#include <stdio.h>
#include <stdbool.h>
#include "force_kp_ui.h"
#include "utility.h"
#include "force.h"

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
    float value;
    float result;
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
            value = get_value();
            result = dyne_to_kilopond(value);
            printf("%f Dyne is equal to %f Kilopond\n", value, result);
            break;
        case 'S':
        case 's':
            printf("Sthène selected\n");
            // enter amount in Sthene
            printf("Enter the amount in Sthène: ");
            value = get_value();
            result = sthene_to_kilopond(value);
            printf("%f Sthène is equal to %f Kilopond\n", value, result);
            break;
        case 'N':
        case 'n':
            printf("Newton selected\n");
            // enter amount in Newton
            printf("Enter the amount in Newton: ");
            value = get_value();
            result = newton_to_kilopond(value);
            printf("%f Newton is equal to %f Kilopond\n", value, result);
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