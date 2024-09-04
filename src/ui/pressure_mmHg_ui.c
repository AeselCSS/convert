#include <stdio.h>
#include <stdbool.h>
#include "pressure_ui.h"
#include "utility.h"
#include "pressure.h"

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
    float value;
    float result;
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
            printf("Enter the amount in inH2O: ");
            value = get_value();
            result = inH2O_to_mmHg(value);
            printf("Result: %f inH2O is %f mmHg\n", value, result);
            break;
        case 'T':
        case 't':
            printf("Torr selected\n");
            printf("Enter the amount in Torr: ");
            value = get_value();
            result = torr_to_mmHg(value);
            printf("Result: %f Torr is %f mmHg\n", value, result);
            break;
        case 'P':
        case 'p':
            printf("Pascal selected\n");
            printf("Enter the amount in Pascal: ");
            value = get_value();
            result = pascal_to_mmHg(value);
            printf("Result: %f Pascal is %f mmHg\n", value, result);
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