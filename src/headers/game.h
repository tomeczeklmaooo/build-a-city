#ifndef GAME_H
#define GAME_H

// first argument is the name, and the second is the grid size (width and height; 1:1 ratio)
void init_city(char name[16], int size);
void init_town(char name[16], int size);
void init_village(char name[16], int size);
void init_settlement(char name[16], int size);

#endif