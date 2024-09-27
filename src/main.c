#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#include "headers/areagrids.h"
#include "headers/buildings.h"
#include "headers/tstring.h"

#define cls() system("cls||clear");

const char game_version[] = "0.1";

void init()
{
	printf("City Builder Game\n");

	char userchoice[] = "";
	int buildingchoice;

	printf("Choose the type of your area [City, Town, Village, Settlement]: ");
	scanf("%s", &userchoice);
	strncpy(userchoice, toLower(userchoice), sizeof(userchoice));

	if (strcmp(userchoice, "city") == 0)
	{
		printf("%s (Grid size: %s)\n", area_type[0][0], area_type[0][1]);
		printf("\nBuildings available:\n");
		for (int i = 0; i < (sizeof(buildings_city) / 16); i++)
		{
			printf("[%d] %s (%s)\n", i + 1, buildings_city[i][0], buildings_city[i][1]);
		}
		printf("\nPick a building [1 to %d]: ", ((int)sizeof(buildings_city) / 16));
		scanf("%d", &buildingchoice);
		printf("You chose %s with size of %s", buildings_city[buildingchoice - 1][0], buildings_city[buildingchoice - 1][1]);
	}
	else if (strcmp(userchoice, "town") == 0)
	{
		printf("%s (Grid size: %s)\n", area_type[1][0], area_type[1][1]);
	}
	else if (strcmp(userchoice, "village") == 0)
	{
		printf("%s (Grid size: %s)\n", area_type[2][0], area_type[2][1]);
	}
	else if (strcmp(userchoice, "settlement") == 0)
	{
		printf("%s (Grid size: %s)\n", area_type[3][0], area_type[3][1]);
	}

	// PLACING BUILDINGS: give the coordinates on the grid, and the top left corner of the building will be placed there
	// frfr
}

void about()
{
	printf("Build A City - a simple terminal game written in C.\n");
	printf("Version %s\t\tDeveloped by @toastercs\n", game_version);
}

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		// we only initialize the game if there is 1 argument (executable name only)
		init();
	}
	else
	{
		for (int i = 0; i < argc; i++)
		{
			if (strcmp(argv[i], "about") == 0)
			{
				about();
			}
			// else
			// {
			// 	printf("Unrecognized argument!\n");
			// 	printf("To play the game, use: cbuilder\n");
			// 	printf("To see information about the game, use: cbuilder about\n");
			// 	exit(0);
			// }
		}
	}

	// put a new line at the end just because
	// printf("\n");

	return 0;
}