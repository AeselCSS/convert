#include <stdio.h>
#include <stdbool.h>
#include "volume_ui.h"
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
            printf("Minim selected\n\n");
            printf("Enter the amount in Minim: ");
            value = get_value();
            result = minim_to_peck(value);
            printf("Result: %.2f Minim is %.3f Peck\n\n", value, result);
            break;
        case 'F':
        case 'f':
            printf("Firkin selected\n\n");
            printf("Enter the amount in Firkin: ");
            value = get_value();
            result = firkin_to_peck(value);
            printf("Result: %.2f Firkin is %.3f Peck\n\n", value, result);
            break;
        case 'L':
        case 'l':
            printf("Litre selected\n\n");
            printf("Enter the amount in Litre: ");
            value = get_value();
            result = litre_to_peck(value);
            printf("Result: %.2f Litre is %.3f Peck\n\n", value, result);
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