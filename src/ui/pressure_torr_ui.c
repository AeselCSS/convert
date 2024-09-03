#include <stdio.h>
#include <stdbool.h>
#include "pressure_torr_ui.h"
#include "utility.h"
#include "pressure.h"

void display_pressure_torr_menu()
{
    printf("Please select the unit you want to convert to Torr:\n");
    printf("M. Millimeter of mercury (mmHg)\n");
    printf("I. Inch of water (inH2O)\n");
    printf("P. Pascal\n");
    printf("X. Exit\n");
}

void select_pressure_torr_menu_option()
{
    char selection;
    float value;
    float result;
    bool is_exited = false;
    do
    {
        display_pressure_torr_menu();
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
            result = mmHg_to_torr(value);
            printf("Result: %f mmHg is %f Torr\n", value, result);
            break;
        case 'I':
        case 'i':
            printf("Inch of water (inH2O) selected\n");
            // enter amount in inH2O
            printf("Enter the amount in inH2O: ");
            value = get_value();
            result = inH2O_to_torr(value);
            printf("Result: %f inH2O is %f Torr\n", value, result);
            break;
        case 'P':
        case 'p':
            printf("Pascal selected\n");
            // enter amount in Pascal
            printf("Enter the amount in Pascal: ");
            value = get_value();
            result = pascal_to_torr(value);
            printf("Result: %f Pascal is %f Torr\n", value, result);
            break;
        case 'X':
        case 'x':
            printf("Exiting Torr conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}