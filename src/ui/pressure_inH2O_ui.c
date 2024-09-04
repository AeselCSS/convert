#include <stdio.h>
#include <stdbool.h>
#include "pressure_ui.h"
#include "utility.h"
#include "pressure.h"

void display_pressure_inH2O_menu()
{
    printf("Please select the unit you want to convert to Inch of water (inH2O):\n");
    printf("M. Millimeter of mercury (mmHg)\n");
    printf("T. Torr\n");
    printf("P. Pascal\n");
    printf("X. Exit\n");
}

void select_pressure_inH2O_menu_option()
{
    char selection;
    float value;
    float result;
    bool is_exited = false;
    do
    {
        display_pressure_inH2O_menu();
        printf("Enter your selection: ");
        selection = get_choice();
        

        switch (selection)
        {
        case 'M':
        case 'm':
            printf("Millimeter of mercury (mmHg) selected\n");
            // enter amount in mmHg
            printf("Enter the amount in mmHg: ");
            value = get_value();
            result = mmHg_to_inH2O(value);
            printf("Result: %f mmHg is %f inH2O\n", value, result);
            break;
        case 'T':
        case 't':
            printf("Torr selected\n");
            // enter amount in Torr
            printf("Enter the amount in Torr: ");
            value = get_value();
            result = torr_to_inH2O(value);
            printf("Result: %f Torr is %f inH2O\n", value, result);
            break;
        case 'P':
        case 'p':
            printf("Pascal selected\n");
            // enter amount in Pascal
            printf("Enter the amount in Pascal: ");
            value = get_value();
            result = pascal_to_inH2O(value);
            printf("Result: %f Pascal is %f inH2O\n", value, result);
            break;
        case 'X':
        case 'x':
            printf("Exiting inH2O conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}


