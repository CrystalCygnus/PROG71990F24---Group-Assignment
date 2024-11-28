// Group 3 - prog71990 - fall24
// Group Project
// task.h - created by Takkyon Kesselring, modified by ...
// Interface for the task struct

#pragma once

typedef struct task {
	int ID;
	char* title;

} *PTASK, TASK;

// Create
TASK createTask(int ID, char* title);

// Read
void printTask(TASK task);

// Update
void changeTitle(PTASK task);

// Delete
void clearTask(PTASK task);
