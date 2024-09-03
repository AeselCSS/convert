#include <stdio.h>
#include <stdbool.h>
#include "volume_peck_ui.h"
#include "utility.h"
#include "volume.h"

void display_volume_peck_menu()
{
    printf("Please select the unit you want to convert to Peck:\n");
    printf("M. Minim\n");
    printf("F. Firkin\n");
    printf("L. Litre\n");
    printf("X. Exit\n");
}

void select_volume_peck_menu_option()
{
    char selection;
    float value;
    float result;
    bool is_exited = false;
    do
    {
        display_volume_peck_menu();
        printf("Enter your selection: ");
        selection = get_choice();
        switch (selection)
        {
        case 'M':
        case 'm':
            printf("Minim selected\n");
            // enter amount in Minim
            printf("Enter the amount in Minim: ");
            value = get_value();
            result = convert_minim_to_peck(value);
            printf("Result: %f Minim is %f Peck\n", value, result);
            break;
        case 'F':
        case 'f':
            printf("Firkin selected\n");
            // enter amount in Firkin
            printf("Enter the amount in Firkin: ");
            value = get_value();
            result = convert_firkin_to_peck(value);
            printf("Result: %f Firkin is %f Peck\n", value, result);
            break;
        case 'L':
        case 'l':
            printf("Litre selected\n");
            // enter amount in Litre
            printf("Enter the amount in Litre: ");
            value = get_value();
            result = convert_litre_to_peck(value);
            printf("Result: %f Litre is %f Peck\n", value, result);
            break;
        case 'X':
        case 'x':
            printf("Exiting Peck conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}