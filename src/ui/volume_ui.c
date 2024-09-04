#include <stdio.h> 
#include <stdbool.h>
#include "volume_ui.h"
#include "utility.h"

void display_volume_menu()
{
    clear_display();
    printf("Volume Conversion:\n");
    printf("---------------------------------------------------------\n");
    printf("Please select from the following volume units:\n");
    printf("M. Minim\n");
    printf("P. Peck\n");
    printf("F. Firkin\n");
    printf("X. Exit\n");    
}

void select_volume_menu_option()
{
    char selection;
    bool is_exited = false;
    do
    {
        display_volume_menu();
        printf("Enter your selection: ");
        selection = get_choice();
        switch (selection)
        {
        case 'M':
        case 'm':
            printf("Minim selected\n\n");
            select_volume_minim_menu_option();
            break;
        case 'P':
        case 'p':
            printf("Peck selected\n\n");
            select_volume_peck_menu_option();
            break;
        case 'F':
        case 'f':
            printf("Firkin selected\n\n");
            select_volume_firkin_menu_option();
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