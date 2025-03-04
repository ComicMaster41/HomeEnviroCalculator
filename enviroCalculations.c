// User input to ask for required information
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "enviroHeader.h"

// Function to check where hte user is
void calculateHome(Home userHome) {
    // Check if the residence is a house
    if (strcmp(userHome.residenceType, "house") == 0) {
        // Process Urban homes first
        if (strcmp(userHome.location, "urban") == 0) {
            // ----- Urban: Solar -----
            if (strcmp(userHome.powerType, "solar") == 0) {
                if (userHome.residenceAge >= 60) {
                    printf("unsatisfactory\n");
                }
                else if (userHome.residenceAge >= 50 && userHome.residenceAge < 60) {
                    if (userHome.energyUsage < 400)
                        printf("poor\n");
                    else
                        printf("unsatisfactory\n");
                }
                else if (userHome.residenceAge >= 40 && userHome.residenceAge < 50) {
                    if (userHome.energyUsage < 4000 && userHome.waterUsage < 50)
                        printf("satisfactory\n");
                    else if (userHome.energyUsage < 4000 && (userHome.waterUsage >= 50 && userHome.waterUsage <= 150))
                        printf("poor\n");
                    else
                        printf("satisfactory\n");
                }
                else if (userHome.residenceAge >= 30 && userHome.residenceAge < 40) {
                    if (userHome.energyUsage >= 4000 && userHome.energyUsage <= 12000)
                        printf("good\n");
                    else if (userHome.energyUsage < 4000)
                        printf("very good\n");
                    else
                        printf("unspecified outcome\n"); // In case energy > 12000
                }
                else if (userHome.residenceAge >= 15 && userHome.residenceAge < 30) {
                    if (userHome.energyUsage >= 9000 || (userHome.waterUsage >= 100 && userHome.waterUsage <= 150))
                        printf("very good\n");
                    else
                        printf("excellent\n");
                }
                else if (userHome.residenceAge >= 5 && userHome.residenceAge < 15) {
                    printf("excellent\n");
                }
                else {
                    printf("Invalid age range\n");
                }
            }
            // ----- Urban: Grid -----
            else if (strcmp(userHome.powerType, "grid") == 0) {
                if (userHome.residenceAge >= 60) {
                    printf("unsatisfactory\n");
                }
                else if (userHome.residenceAge >= 50 && userHome.residenceAge < 60) {
                    if (userHome.energyUsage < 400)
                        printf("poor\n");
                    else
                        printf("unsatisfactory\n");
                }
                else if (userHome.residenceAge >= 40 && userHome.residenceAge < 50) {
                    if (userHome.energyUsage >= 12000)
                        printf("unsatisfactory\n");
                    else if (userHome.energyUsage >= 9000 && userHome.energyUsage <= 12000 &&
                             (userHome.waterUsage >= 100 && userHome.waterUsage <= 150))
                        printf("unsatisfactory\n");
                    else
                        printf("satisfactory\n");
                }
                else if (userHome.residenceAge >= 30 && userHome.residenceAge < 40) {
                    if (userHome.energyUsage >= 9000 && userHome.energyUsage <= 12000)
                        printf("satisfactory\n");
                    else if (userHome.energyUsage >= 4000 && userHome.energyUsage < 9000)
                        printf("good\n");
                    else if (userHome.energyUsage < 400 && (userHome.waterUsage < 50 || userHome.waterUsage > 150))
                        printf("very good\n");
                    else
                        printf("good\n");
                }
                else if (userHome.residenceAge >= 15 && userHome.residenceAge < 30) {
                    if (userHome.energyUsage >= 4000 && userHome.energyUsage <= 12000)
                        printf("very good\n");
                    else
                        printf("excellent\n");
                }
                else if (userHome.residenceAge >= 5 && userHome.residenceAge < 15) {
                    printf("excellent\n");
                }
                else {
                    printf("Invalid age range\n");
                }
            }
            else {
                printf("Invalid energy source for urban\n");
            }
        }
        // ----- Rural Homes -----
        else if (strcmp(userHome.location, "rural") == 0) {
            // ----- Rural: Solar -----
            if (strcmp(userHome.powerType, "solar") == 0) {
                if (userHome.residenceAge >= 60) {
                    printf("unsatisfactory\n");
                }
                else if (userHome.residenceAge >= 50 && userHome.residenceAge < 60) {
                    // If energy is between 4000 and 12000 then poor, else satisfactory.
                    if (userHome.energyUsage >= 4000 && userHome.energyUsage <= 12000)
                        printf("poor\n");
                    else
                        printf("satisfactory\n");
                }
                else if (userHome.residenceAge >= 40 && userHome.residenceAge < 50) {
                    if (userHome.energyUsage >= 4000 && userHome.energyUsage <= 12000)
                        printf("satisfactory\n");
                    else
                        printf("good\n");
                }
                else if (userHome.residenceAge >= 30 && userHome.residenceAge < 40) {
                    if (userHome.energyUsage >= 12000) {
                        if (userHome.waterUsage < 50)
                            printf("very good\n");
                        else
                            printf("good\n");
                    }
                    else {
                        printf("very good\n");
                    }
                }
                else if (userHome.residenceAge >= 5 && userHome.residenceAge < 30) {
                    printf("excellent\n");
                }
                else {
                    printf("Invalid age range\n");
                }
            }
            // ----- Rural: Grid -----
            else if (strcmp(userHome.powerType, "grid") == 0) {
                if (userHome.residenceAge >= 60) {
                    printf("unsatisfactory\n");
                }
                else if (userHome.residenceAge >= 50 && userHome.residenceAge < 60) {
                    if (userHome.energyUsage < 4000)
                        printf("poor\n");
                    else
                        printf("unsatisfactory\n");
                }
                else if (userHome.residenceAge >= 40 && userHome.residenceAge < 50) {
                    if (userHome.energyUsage < 4000) {
                        if (userHome.waterUsage < 50)
                            printf("good\n");
                        else
                            printf("satisfactory\n");
                    }
                    else
                        printf("poor\n");
                }
                else if (userHome.residenceAge >= 30 && userHome.residenceAge < 40) {
                    if (userHome.energyUsage < 4000)
                        printf("very good\n");
                    else
                        printf("good\n");
                }
                else if (userHome.residenceAge >= 15 && userHome.residenceAge < 30) {
                    if (userHome.energyUsage >= 12000) {
                        if (userHome.waterUsage >= 50 && userHome.waterUsage <= 150)
                            printf("very good\n");
                        else
                            printf("excellent\n");
                    }
                    else if (userHome.energyUsage >= 9000 && userHome.energyUsage < 12000) {
                        if (userHome.waterUsage >= 100 && userHome.waterUsage <= 150)
                            printf("very good\n");
                        else
                            printf("excellent\n");
                    }
                    else {
                        printf("excellent\n");
                    }
                }
                else if (userHome.residenceAge >= 5 && userHome.residenceAge < 15) {
                    printf("excellent\n");
                }
                else {
                    printf("Invalid age range\n");
                }
            }
            else {
                printf("Invalid energy source for rural\n");
            }
        }
        else {
            printf("Invalid location\n");
        }
    }
    else {
        printf("Residence is not a house\n");
    }
}

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

    if (strcmp(userHome.residenceType, "house") == 0) {
        calculateHome(userHome);
    }
    else {
        printf("You chose apartment"); // NEED TO WRITE THIS FUNCTIO
    }
}