#include <stdbool.h>

#ifndef BUILDINGS_H
#define BUILDINGS_H

typedef struct Building {
	char name[sizeof(char*) * 4]; // 32 bytes
	int identifier;
	int width;
	int height;
} building;

static char *buildings[][1] = {
	{"Main Square"},
	{"City Hall"},
	{"Hospital"},
	{"Police Station"},
	{"Fire Dept Station"},
	{"Housing Block"},
	{"Single House"}
};
static int building_size[][2] = {
	{5, 5},
	{3, 2},
	{3, 2},
	{3, 2},
	{2, 2},
	{2, 1},
	{1, 1}
};

// functions for placing buildings and checking if a building can be placed
void place_building(int building_identifier, int building_width, int building_height, int pos_x, int pos_y);
bool check_space(int building_width, int building_height, int pos_x, int pos_y);

int get_building_choice(int choice);

#endif /* BUILDINGS_H */