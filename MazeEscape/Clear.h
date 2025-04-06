#pragma once
#define CLEARDATAPATH "Data.txt"
#define MAXLENGTH 50

#include "borderMenu.h"
#include "IntroMenu.h"


typedef struct _CLEAR {
	int order;
	int score;
	char name[MAXLENGTH];
}CLEAR;


void Clear();

