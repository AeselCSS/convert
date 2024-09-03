#include <stdio.h>
#include <stdbool.h>
#include "force_ui.h"
#include "force_dyne_ui.h"
#include "force_kp_ui.h"
#include "force_sthene_ui.h"
#include "utility.h"

void display_force_menu()
{
    // units of force: Dyne, Kilopond and Sthene
    printf("Please select from the following force units:\n");
    printf("D. Dyne\n");
    printf("K. Kilopond\n");
    printf("S. Sthene\n");
}

void select_force_menu_option()
{
    char selection;
    bool is_exited = false;
    do
    {
        display_force_menu();
        printf("Enter your selection: ");
        selection = get_choice();
        switch (selection)
        {
        case 'D':
        case 'd':
            printf("Dyne selected\n");
            select_force_dyne_menu_option();
            break;
        case 'K':
        case 'k':
            printf("Kilopond selected\n");
            select_force_kp_menu_option();
            break;
        case 'S':
        case 's':
            printf("Sthène selected\n");
            select_force_sthene_menu_option();
            break;
        case 'X':
        case 'x':
            printf("Exiting force conversion\n");
            is_exited = true;
            break;
        default:
            printf("Invalid selection\n");
        }
    } while (!is_exited);
}