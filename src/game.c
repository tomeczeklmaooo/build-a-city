#include <stdio.h>

#include "headers/game.h"
#include "headers/areagrids.h"

void init_city(char name[16], int size)
{
	printf("Welcome to %s!\nTake a look at your city grid below:\n\n", name);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", area_grid_city[i][j]);
		}
		printf("\n");
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