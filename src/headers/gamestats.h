#ifndef GAMESTATS_H
#define GAMESTATS_H

extern int population;
extern int population_growth; // every 30 seconds
extern int gametime; // time in seconds
extern int balance;
extern int balance_per_citizen; // balance added every 10 seconds for every citizen, ex. 10 citizens * 15 coins = 150 coins
extern int buildings_placed; // amount of buildings placed in total

// this function will convert the time from the gametime variable to HH:MM:SS format
char* convert_gametime_to_readable_format(int time);

#endif