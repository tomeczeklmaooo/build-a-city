#include <stdio.h>

#include "headers/buildings.h"
#include "headers/areagrids.h"

buildings building_MainSquare = {"Main Square", 1, 5, 5};
buildings building_CityHall = {"City Hall", 2, 3, 2};
buildings building_Hospital = {"Hospital", 3, 3, 2};
buildings building_PoliceStation = {"Police Station", 4, 2, 2};
buildings building_FireDeptStation = {"Fire Dept Station", 5, 2, 2};
buildings building_HousingBlock = {"Housing Block", 6, 2, 1};
buildings building_SingleHouse = {"Single House", 7, 1, 1};

void place_building(int building_identifier, int building_width, int building_height, int pos_x, int pos_y)
{
	// TODO
}

// this function checks for any possible overlaps and prints a message if there are any overlaps found
void check_space(int building_width, int building_height, int pos_x, int pos_y)
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
	}
}