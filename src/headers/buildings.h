#ifndef BUILDINGS_H
#define BUILDINGS_H

typedef struct Building {
	char name[sizeof(char*) * 4]; // 32 bytes
	int identifier;
	int width;
	int height;
} buildings;

// functions for placing buildings and checking if a building can be placed
void place_building(int building_identifier, int building_width, int building_height, int pos_x, int pos_y);
void check_space(int building_width, int building_height, int pos_x, int pos_y);

#endif /* BUILDINGS_H */