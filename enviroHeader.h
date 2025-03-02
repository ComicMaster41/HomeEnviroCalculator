//
// Created by Andres Chapman on 3/2/25.
//

#ifndef ENVIROHEADER_H
#define ENVIROHEADER_H

typedef struct {
  char residenceType[100];
  char location[100];
  char powerType[100];
  int waterUsage;
  int residenceAge;
  int energyUsage;
} Home;

void userInput(Home userHome);

#endif //ENVIROHEADER_H
