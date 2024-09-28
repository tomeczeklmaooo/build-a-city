#ifndef AREAGRIDS_H
#define AREAGRIDS_H

extern int area_grid_city[40][40];
extern int area_grid_town[30][30];
extern int area_grid_village[20][20];
extern int area_grid_settlement[10][10];
extern char *area_type[4][2];
void generate_area_grid(int size);
void show_grid(int size);

#endif /* AREAGRIDS_H */