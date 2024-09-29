#include <stdbool.h>

#ifndef BUILDINGS_H
#define BUILDINGS_H

typedef struct Building {
	char name[sizeof(char*) * 4]; // 32 bytes
	int identifier;
	int width;
	int height;
} building;

extern char *buildings[][1];
extern int building_size[][2];

// ascii building definitions
extern char building_ascii_mainsquare[5][5];
extern char building_ascii_cityhall[3][3];
extern char building_ascii_hospital[2][3];
extern char building_ascii_policestation[2][3];
extern char building_ascii_firedeptstation[2][2];
extern char building_ascii_housingblock[1][2];
extern char building_ascii_singlehouse[1][1];

// functions for placing buildings and checking if a building can be placed
void place_building(int building_identifier, int building_width, int building_height, int pos_x, int pos_y);
bool check_space(int building_width, int building_height, int pos_x, int pos_y);

int get_building_choice(int choice);

#endif /* BUILDINGS_H */