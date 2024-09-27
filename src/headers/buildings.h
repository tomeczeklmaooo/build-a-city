#ifndef BUILDINGS_H
#define BUILDINGS_H

char *buildings_city[][2] = {
	// Building, Size
	{"Main Square", "5x5"},
	{"City Hall", "3x2"},
	{"Hospital", "3x2"},
	{"Police Station", "2x2"},
	{"Fire Dept Station", "2x2"},
	{"Housing Block", "2x1"},
	{"Single House", "1x1"}
};
char *buildings_town[][2] = {
	// Building, Size
	{"Main Square", "4x4"},
	{"Town Hall", "2x2"},
	{"Hospital", "2x2"},
	{"Police Station", "2x1"},
	{"Fire Dept Station", "2x1"},
	{"Housing Block", "2x1"},
	{"Single House", "1x1"}
};
char *buildings_village[][2] = {
	// Building, Size
	{"Fire Dept Station", "2x1"},
	{"Housing Block", "2x1"},
	{"Single House", "1x1"}
};
char *buildings_settlement[][2] = {
	// Building, Size
	{"Single House", "1x1"}
};

#endif /* BUILDINGS_H */