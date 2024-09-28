#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#include "headers/game.h"
#include "headers/buildings.h"
#include "headers/tstring.h"
#include "headers/constants.h"

#define cls() system("cls||clear");

void init()
{
	printf("City Builder Game\n");

	char userchoice[] = "";
	char name[16] = "";

	printf("Choose the type of your area [City, Town, Village, Settlement]: ");
	scanf("%s", (char*)&userchoice);
	strncpy(userchoice, toLower(userchoice), sizeof(userchoice));

	if (strcmp(userchoice, "city") == 0)
	{
		printf("Choose a name for your %s [max. 16 chars]: ", userchoice);
		scanf("%s", (char*)&name);
		init_city(name, 40);
	}
	else if (strcmp(userchoice, "town") == 0)
	{
		printf("Can't play it yet. Game is still in design.\n");
		// printf("Choose a name for your %s [max. 16 chars]: ", userchoice);
		// scanf("%s", &name);
		// init_town(name, 30);
	}
	else if (strcmp(userchoice, "village") == 0)
	{
		printf("Can't play it yet. Game is still in design.\n");
		// printf("Choose a name for your %s [max. 16 chars]: ", userchoice);
		// scanf("%s", &name);
		// init_village(name, 20);
	}
	else if (strcmp(userchoice, "settlement") == 0)
	{
		printf("Can't play it yet. Game is still in design.\n");
		// printf("Choose a name for your %s [max. 16 chars]: ", userchoice);
		// scanf("%s", &name);
		// init_settlement(name, 10);
	}

	// PLACING BUILDINGS: give the coordinates on the grid, and the top left corner of the building will be placed there
	// frfr
}

void about()
{
	printf("Build A City - a simple terminal game written in C.\n");
	printf("Version %s\t\tDeveloped by %s\n", game_version, developers);
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