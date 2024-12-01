// Group 3 - prog71990 - fall24
// Group Project
// task.h 
// Interface for the task struct

#pragma once

typedef struct task {
	int ID;
	char* title;

} *PTASK, TASK;

// Create
PTASK createTask(int ID, char* title);

// Read
void printTask(TASK task);
void printTaskVerbose(TASK task);

// Update
void changeTitle(PTASK task, char* newTitle);

// Delete
void clearTask(PTASK task);
