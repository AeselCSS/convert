#include <stdio.h>
#include <stdbool.h>
#include "volume_minim_ui.h"
#include "utility.h"
#include "volume.h"

void display_volume_minim_menu()
{
    printf("Please select the unit you want to convert to Minim:\n");
    printf("P. Peck\n");
    printf("F. Firkin\n");
    printf("L. Litre\n");
    printf("X. Exit\n");
}

void select_volume_minim_menu_option()
{
    char selection;
    float value;
    float result;
    bool is_exited = false;
    do
    {
        display_volume_minim_menu();
        printf("Enter your selection: ");
        selection = get_choice();
        switch (selection)
        {
        case 'P':
        case 'p':
            printf("Peck selected\n");
            // enter amount in Peck
            printf("Enter the amount in Peck: ");
            value = get_value();
            result = convert_peck_to_minim(value);
            printf("Result: %f Peck is %f Minim\n", value, result);
            break;
        case 'F':
        case 'f':
            printf("Firkin selected\n");
            // enter amount in Firkin
            printf("Enter the amount in Firkin: ");
            value = get_value();
            result = convert_firkin_to_minim(value);
            printf("Result: %f Firkin is %f Minim\n", value, result);
            break;
        case 'L':
        case 'l':
            printf("Litre selected\n");
            // enter amount in Litre
            printf("Enter the amount in Litre: ");
            value = get_value();
            result = convert_litre_to_minim(value);
            break;
        case 'X':
        case 'x':
            printf("Exiting Minim conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}