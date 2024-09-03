#include <stdio.h>
#include <stdbool.h>
#include "pressure_mmHg_ui.h"
#include "utility.h"

void display_pressure_mmHg_menu()
{
    printf("Please select the unit you want to convert to Millimeter of mercury (mmHg):\n");
    printf("I. Inch of water (inH2O)\n");
    printf("T. Torr\n");
    printf("P. Pascal\n");
    printf("X. Exit\n");
}

void select_pressure_mmHg_menu_option()
{
    char selection;
    bool is_exited = false;
    do
    {
        display_pressure_mmHg_menu();
        printf("Enter your selection: ");
        selection = get_choice();
        switch (selection)
        {
        case 'I':
        case 'i':
            printf("Inch of water (inH2O) selected\n");
            // enter amount in inH2O
            printf("Enter the amount in inH2O: ");
            float value = get_value();
            //DUMMY PRINT STATEMENT TO TEST VALUE
            printf("You entered: %f\n", value);
            // Call pressure conversion function
            break;
        case 'T':
        case 't':
            printf("Torr selected\n");
            // enter amount in Torr
            printf("Enter the amount in Torr: ");
            value = get_value();
            //DUMMY PRINT STATEMENT TO TEST VALUE
            printf("You entered: %f\n", value);
            // Call pressure conversion function
            break;
        case 'P':
        case 'p':
            printf("Pascal selected\n");
            // enter amount in Pascal
            printf("Enter the amount in Pascal: ");
            value = get_value();
            //DUMMY PRINT STATEMENT TO TEST VALUE
            printf("You entered: %f\n", value);
            // Call pressure conversion function
            break;
        case 'X':
        case 'x':
            printf("Exiting mmHg conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}