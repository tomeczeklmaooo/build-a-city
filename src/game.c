#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "headers/game.h"
#include "headers/areagrids.h"
#include "headers/buildings.h"

void init_city(char name[16], int size)
{
	printf("Welcome to %s!\nTake a look at your city grid below:\n\n", name);

	show_grid(size);

	while (true)
	{
		int id = get_building_choice(0);
		int pos_x = get_building_choice(1);
		int pos_y = get_building_choice(2);

		place_building(id, building_size[id - 1][0], building_size[id - 1][1], pos_x - 1, pos_y - 1);
		show_grid(size);

		// debugging
		printf("id:%d pos_x:%d pos_y:%d\n", id, pos_x, pos_y);
	}
}

void init_town(char name[16], int size)
{
	printf("Welcome to %s!\nTake a look at your town grid below:\n\n", name);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", area_grid_town[i][j]);
		}
		printf("\n");
	}
}

void init_village(char name[16], int size)
{
	printf("Welcome to %s!\nTake a look at your village grid below:\n\n", name);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", area_grid_village[i][j]);
		}
		printf("\n");
	}
}

void init_settlement(char name[16], int size)
{
	printf("Welcome to %s!\nTake a look at your settlement grid below:\n\n", name);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", area_grid_settlement[i][j]);
		}
		printf("\n");
	}
}