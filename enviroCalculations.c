// User input to ask for required information
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "enviroHeader.h"

void userInput(Home userHome) {
    while (1) {
        printf("Do you live in an [apartment] or a [house]?\n");
        if (fgets(userHome.residenceType, sizeof(userHome.residenceType), stdin) != NULL) {
            userHome.residenceType[strcspn(userHome.residenceType, "\n")] = '\0'; // Get rid of newline
            if (strcmp(userHome.residenceType, "house") == 0){
                // Call house function
            }
            else if (strcmp(userHome.residenceType, "apartment") == 0) {
                // Call apartment function
            }
            else {
                printf("Please enter a valid residence\n");
                return;
            }
        }

        printf("Do you live in an [urban] or [rural] area?\n");
        if (fgets(userHome.location, sizeof(userHome.location), stdin) != NULL) {
            userHome.location[strcspn(userHome.location, "\n")] = '\0';
            if (strcmp(userHome.location, "rural") == 0){
                // Call rural function
            }
            else if (strcmp(userHome.location, "urban") == 0) {
                // Call urban function
            }
            else {
                printf("Please enter a valid residence\n");
                return;
            }
        }

        printf("Does your residence use [solar] or [grid] power?\n");
        if (fgets(userHome.powerType, sizeof(userHome.powerType), stdin) != NULL) {
            userHome.powerType[strcspn(userHome.powerType, "\n")] = '\0';
            if (strcmp(userHome.powerType, "solar") == 0){
                // Call solar function
            }
            else if (strcmp(userHome.powerType, "grid") == 0) {
                // Call grid function
            }
            else {
                printf("Please enter a valid residence\n"); // here is giving us the error
                return;
            }
        }

        // NOTE: Don't mix scanf with fgets or it won't work

        printf("How old is your house (in numeric age)\n");
        scanf("%d", &userHome.residenceAge);
        if (userHome.residenceAge < 0) {
            printf("Please enter a valid residence\n");
            return;
        }

        printf("How many gallons of water are used a day? (appropriate range 20-300)\n");
        scanf("%d", &userHome.waterUsage);
        if (userHome.waterUsage < 20 || userHome.waterUsage > 300) {
            printf("Please enter a valid residence water usage\n");
            return;
        }

        printf("What is the energy usage? (appropriate range 1000-20,000)\n");
        scanf("%d", &userHome.energyUsage);
        if (userHome.energyUsage < 1000 || userHome.energyUsage > 20000) {
            printf("Please enter a valid residence\n");
            return;
        }
        break; // If answered successfully, break
    }
}
// Function if user has home

// Function if user has apartment

// Function to calculate solar power

// Function to calculate grid power

// Function to calculate water usage

/*
* TEST INPUT:
* Do you live in an apartment or a house?
*
 * Do you live in an urban or rural area?
*
 * Does your residence use solar or grid power?
*
 * How many gallons of water are used a day (20-300)
*
 * What is the energy usage? (1000-20,000)
*
 * How old is the home?
*
 * */

/*
* If user has a home
*        homeFunction
* Else
*         apartmentFunction
*
 * HOMEFUNCTION:
* if solar powwer
*      solar power function
* else
 *      grid power function
*
 * In solar/grid function, it will do the same thing but pass in different ranges
* This way we only have 2 functins or maybe even just 1 that just calculat what is good or not in the range*/