#include <time.h>

#include "headers/gamestats.h"

int population = 0;
int population_growth = 2;
int gametime = 0;
int balance = 0;
int balance_per_citizen = 5;
int buildings_placed = 0;

char* convert_gametime_to_readable_format(int time)
{
	static char ftime[9];
	time_t rawtime;
	struct tm *timeinfo;

	rawtime = 0;
	timeinfo = localtime(&rawtime);

	rawtime += time - 3600; // subtracting 3600s (1h) here because it always was showing 1 hour more than actual time
	timeinfo = localtime(&rawtime);

	strftime(ftime, sizeof(ftime), "%H:%M:%S", timeinfo);

	return ftime;
}