#include "headers/areagrids.h"

char *area_type[4][2] = {
	// Type, Grid Size
	{"City", "40x40"},
	{"Town", "30x30"},
	{"Village", "20x20"},
	{"Settlement", "10x10"}
};

void generate_area_grid(int rows, int columns)
{
	if (rows == 40 && columns == 40)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				area_grid_city[i][j] = 0;
			}
		}
	}
	else if (rows == 30 && columns == 30)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				area_grid_town[i][j] = 0;
			}
		}
	}
	else if (rows == 20 && columns == 20)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				area_grid_village[i][j] = 0;
			}
		}
	}
	else if (rows == 10 && columns == 10)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				area_grid_settlement[i][j] = 0;
			}
		}
	}
}