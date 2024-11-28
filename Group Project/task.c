// Group 3 - prog71990 - fall24
// Group Project
// task.c - created by Takkyon Kesselring, modified by ...
// Implementation for the task struct

#include "task.h"
#include "globals.h"
#include "helpers.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Create
PTASK createTask(int ID, char* title) {
	PTASK newTask = (PTASK)malloc(sizeof(TASK));
	if (!newTask) {
		fprintf(stderr, "error allocating memory\n");
		exit(EXIT_FAILURE);
	}

	newTask->title = ".";
	newTask->ID = ID;
	newTask->title = copyString(title);
	return newTask;
}

// Read
void printTask(TASK task) {
	printf("%s\n", task.title);
}

void printTaskVerbose(TASK task) {
	printf("ID: %d\nTitle: %s\n", task.ID, task.title);
}

// Update
void changeTitle(PTASK task) {

}

// Delete
void clearTask(PTASK task) {

}