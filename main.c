#include <stdio.h>

/*
* In this program we want to make a Home Impact Calculator
* To do so we ask the user for a series of questions
* Depending on their response, the program will determine at what level according to the chart
* their household belongs to
*
* According to the chart, they are broken into the following cateogires
*
* Whether they live in a House/Apartment
* Whether they use Solar/Grid power
* Water Usage (Gallons per day)
* The age of the home/apartment
* Energy usage according to the age of the house
* And if their residence is in an urabn/rural area
*
* Note that the range for gallons of water a day is 20 - 300
* And energy usage is 1000 to 20,000Kw per year
*
* Lastly, depending on the calculations it will result in the follow:
* excellent - very good - satisfactory - unsatisfactory - extremly unsatisfactory
*
* to break this program down, we will have the following functions:
*
* user input()
* apartmentCalculation()
* houseCalculation()
* Then several small functions that check whether it is a house or not.
* I'm thinking that we can call a function to calculate the solar/grid
* or the water usage or energy usage and just use a series of switch statements depending on if
* the parameter passed in was a house or an apamrtnet
* that way we can avoid having duplicate functions that calculate a simlar thing
*
* Now for dealing with the calculations, we can have a range from the highest - lowest and depending on
* where they rest on them all then we add a satisfactory or not
 */
#include <stdlib.h>
#include <string.h>
#include "enviroHeader.h"

int main() {
    Home userHome;
    userInput(userHome);
    return 0;
}