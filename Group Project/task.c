// Group 3 - prog71990 - fall24
// Group Project
// task.c
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

	newTask->ID = ID;
	newTask->title = copyString(title);
	return newTask;
}

// Read
void printTask(TASK task) {
	printf("%s\n", task.title);
}

void printTaskVerbose(TASK task) {
	printf("Title: %s\nID: %d\n", task.title, task.ID);
}

void searchId(TASK taskList[], int searchedId) {
	int i = 0;

	while (taskList[i].title != NULL) {
		if (taskList[i].ID == searchedId) {
			printTaskVerbose(taskList[i]);
			return;
		}
		i++;
		
	}
	printf("Task not found\n");
	return;
	
}

// Should taskCount in main be depricated, 
// be sure to find some way to get the taskcount
void searchTitle(TASK taskList[], char* searchedTitle, int taskCount) {

	// Goes through every task comparing titles
	// Prints if it finds a match
	for (int i = 0; i < taskCount; i++) {
		if (strcmp(taskList[i].title, searchedTitle) == 0) {
			printTaskVerbose(taskList[i]);
			return;
		}
		i++;

	}
	printf("Task not found\n");
	return;

}

// Update
void changeTitle(PTASK task, char* newTitle) {
	free(task->title);
	task->title = copyString(newTitle);
}

// Delete
void clearTask(PTASK task) {
	free(task->title);
	free(task);
}
