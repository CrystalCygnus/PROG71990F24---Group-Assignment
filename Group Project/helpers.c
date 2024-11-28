// Group 3 - prog71990 - fall24
// Group Project
// task.c - created by Takkyon Kesselring, modified by ...
// Implementation for helpers

#include "globals.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copyString(char* originalString) {
	char* copiedString = (char*)calloc((strlen(originalString)+1), sizeof(char));
	if (!copiedString) {
		fprintf(stderr, "Calloc failure :(\n");
		return NULL;
	}

	strncpy(copiedString, originalString, strlen(originalString));
	return copiedString;
}

