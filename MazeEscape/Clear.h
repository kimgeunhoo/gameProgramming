#pragma once
#define CLEARDATAPATH "Data.txt"
#define MAXLENGTH 50

#include "borderMenu.h"
#include "IntroMenu.h"


typedef struct _CLEAR {
	int stageNum;
	bool clearNum;
}CLEAR;

extern int clearVal;

void Clear();

void FileSave(const char* fileName, CLEAR clear[], int count);
int LoadFile(const char* fileName, CLEAR clear[]);

void PrintClearValue(CLEAR clear[], int count);