#include <stdio.h>
#include <stdbool.h>
#include "volume_ui.h"
#include "utility.h"
#include "volume.h"

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
    float value;
    float result;
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
            printf("Minim selected\n\n");
            // enter amount in Minim
            printf("Enter the amount in Minim: ");
            value = get_value();
            result = minim_to_firkin(value);
            printf("Result: %.2f Minim is %.3f Firkin\n\n", value, result);
            break;
        case 'P':
        case 'p':
            printf("Peck selected\n\n");
            // enter amount in Peck
            printf("Enter the amount in Peck: ");
            value = get_value();
            result = peck_to_firkin(value);
            printf("Result: %.2f Peck is %.3f Firkin\n\n", value, result);
            break;
        case 'L':
        case 'l':
            printf("Litre selected\n\n");
            // enter amount in Litre
            printf("Enter the amount in Litre: ");
            value = get_value();
            result = litre_to_firkin(value);
            printf("Result: %.2f Litre is %.3f Firkin\n\n", value, result);
            break;
        case 'X':
        case 'x':
            printf("Exiting Firkin conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}