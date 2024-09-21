#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "race.h"
#include "print.h"

int main() {
    srand(time(0));
    struct RaceCar raceCar1 = {
        .driverName = "George",
        .raceCarColor = "yellow",
        .totalLapTime = 0
    };

    struct RaceCar raceCar2 = {
        .driverName = "Cosmo",
        .raceCarColor = "blue",
        .totalLapTime = 0
    };

    printIntro();
    printCountDown();
    startRace(&raceCar1, &raceCar2);

    return 0;
}
