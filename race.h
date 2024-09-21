#ifndef RACE_H
#define RACE_H

// Structures section
struct Race {
    int numberOfLaps;
    int currentLap;
    char *firstPlaceDriverName;
    char *firstPlaceCarColor;
};

struct RaceCar {
    char *driverName;
    char *raceCarColor;
    int totalLapTime;
};

// Function declarations
int calculateTimeToCompleteLap();
void updateRaceCar(struct RaceCar *raceCar);
void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2);
void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2);

#endif
