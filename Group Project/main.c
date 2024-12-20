// Group 3 - prog71990 - fall24
// Group Project
// main.c

#include "globals.h"
#include "task.h"
#include <stdio.h>

int taskCount = 0;	// Probably not the best way of doing this, but I guess it works.
// On save/load be sure to include a taskCount
// Probably depricatable by a linked list of tasks

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

	TASK taskList[] = { *task1, *task2 };

	searchId(taskList, 2);
	searchId(taskList, 3);
	searchTitle(taskList, "And that other project", taskCount);
	searchTitle(taskList, "Wait do we have another?", taskCount);

	clearTask(task2);
}