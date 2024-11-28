// Group 3 - prog71990 - fall24
// Group Project
// main.c - created by Takkyon Kesselring, modified by ...

#include "globals.h"
#include "task.h"
#include <stdio.h>

void main() {
	char* title = "Finish project\0";
	PTASK task1 = createTask(1, title);
	printTaskVerbose(*task1);
}