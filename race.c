#include <stdlib.h>
#include "race.h"
#include "print.h"

//Define the function that will calculate the time to complete a lap
int calculateTimeToCompleteLap() {
    int speed = (rand() % 3) + 1;
    int acceleration = (rand() % 3) + 1;
    int nerves = (rand() % 3) + 1;

    //Return the sum
    return speed + acceleration + nerves;
}

//Define the function that will update the RaceCar's total lap time
void updateRaceCar(struct RaceCar *raceCar) {
    raceCar->totalLapTime += calculateTimeToCompleteLap();
}

//Define the function that will update the first-place information
void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2) {
    if (raceCar1->totalLapTime <= raceCar2->totalLapTime) {
        race->firstPlaceDriverName = raceCar1->driverName;
        race->firstPlaceCarColor = raceCar1->raceCarColor;
    } else {
        race->firstPlaceDriverName = raceCar2->driverName;
        race->firstPlaceCarColor = raceCar2->raceCarColor;
    }
}

//Define the function that will start the race
void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2) {
    struct Race race = {
        .numberOfLaps = 5,
        .currentLap = 1,
        .firstPlaceDriverName = NULL,
        .firstPlaceCarColor = NULL
    };

    for (int lap = 1; lap <= race.numberOfLaps; lap++) {
        race.currentLap = lap;

        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);

        updateFirstPlace(&race, raceCar1, raceCar2);

        printFirstPlaceAfterLap(&race);
    }

    printCongratulation(&race);
}
