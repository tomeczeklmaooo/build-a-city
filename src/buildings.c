#include <stdio.h>

#include "headers/buildings.h"
#include "headers/areagrids.h"

char *buildings[][1] = {
	{"Main Square"},
	{"City Hall"},
	{"Hospital"},
	{"Police Station"},
	{"Fire Dept Station"},
	{"Housing Block"},
	{"Single House"}
};
int building_size[][2] = {
	{5, 5},
	{3, 2},
	{3, 2},
	{3, 2},
	{2, 2},
	{2, 1},
	{1, 1}
};

// this function places a building on the grid (wow that's crazy)
void place_building(int building_identifier, int building_width, int building_height, int pos_x, int pos_y)
{
	if (check_space(building_width, building_height, pos_x, pos_y))
	{
		for (int i = 0; i < building_height; i++)
		{
			for (int j = 0; j < building_width; j++)
			{
				area_grid_city[pos_x + i][pos_y + j] = building_identifier;
			}
		}
	}
}

// this function checks for any possible overlaps and prints a message if there are any overlaps found
// false if can't be placed; true if can be placed
bool check_space(int building_width, int building_height, int pos_x, int pos_y)
{
	int overlap_points = 0;
	for (int i = pos_x; i <= building_width; i++)
	{
		for (int j = pos_y; j <= building_height; j++)
		{
			if (area_grid_city[i][j] != 0)
			{
				overlap_points++;
			}
		}
	}

	if (overlap_points != 0)
	{
		printf("Cannot place the building here! There is overlap in total of %d points!\n", overlap_points);
		return false;
	}

	return true;
}

int get_building_choice(int choice)
{
	int input_building, input_pos_x, input_pos_y;
	if (choice == 0)
	{
		printf("Choose a building to place [1-7]: ");
		scanf("%d", &input_building);
		return input_building;
	}
	else if (choice == 1)
	{
		printf("Choose a column [1-40]: ");
		scanf("%d", &input_pos_x);
		return input_pos_x;
	}
	else if (choice == 2)
	{
		printf("Choose a row [1-40]: ");
		scanf("%d", &input_pos_y);
		return input_pos_y;
	}
	return 0;
}