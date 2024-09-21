#include <stdio.h>
#include "print.h"

// Print functions section
void printIntro() {
    printf("Welcome to our main event digital race fans! I hope everybody has their snacks because we are about to begin!\n");
}

void printCountDown() {
    printf("Racers Ready! In...\n5\n4\n3\n2\n1\nRace!\n");
}

void printFirstPlaceAfterLap(struct Race *race) {
    printf("After lap number %d\nFirst Place Is: %s in the %s race car!\n", race->currentLap, race->firstPlaceDriverName, race->firstPlaceCarColor);
}

void printCongratulation(struct Race *race) {
    printf("Let's all congratulate %s in the %s race car for an amazing performance. It truly was a great race and everybody have a goodnight!\n", race->firstPlaceDriverName, race->firstPlaceCarColor);
}
