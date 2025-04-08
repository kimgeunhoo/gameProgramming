#pragma once
#define CLEARDATAPATH "Data.txt"
#define MAXLENGTH 50

#include "borderMenu.h"
#include "IntroMenu.h"


typedef struct _CLEAR {
	int stageNum;
	bool clearNum;
}CLEAR;


void Clear();

void FileSave();
int LoadRank();
