#pragma once
#include <string>

typedef struct config_t {
	bool enableBurnMarks = true;
} config_t;

extern config_t config;

bool LoadConfig();
void SaveConfig();
