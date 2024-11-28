// Group 3 - prog71990 - fall24
// Group Project
// main.c - created by Takkyon Kesselring, modified by ...

#include "globals.h"
#include "task.h"
#include <stdio.h>

int taskCount = 0;	// Probably not the best way of doing this, but I guess it works.
// On save/load be sure to include a taskCount

void main() {

	char* title = "Finish project";
	taskCount++;
	PTASK task1 = createTask(taskCount, title);
	printTaskVerbose(*task1);

	changeTitle(task1, "And that other project");
	printTaskVerbose(*task1);

	title = "Oh heres another task!";
	taskCount++;
	PTASK task2 = createTask(taskCount, title);
	printTaskVerbose(*task2);

	clearTask(task2);
}