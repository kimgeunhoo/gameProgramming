#pragma once
#include <stdio.h>


#define WIDTH 42  // ¸Ê °¡·Î Å©±â
#define HEIGHT 23 // ¸Ê ¼¼·Î Å©±â

void ShowBorder();

void MenuBorder();
void ClearBorder();
void printStage();
void printStage2();
void printStage3();

extern int stageMap[HEIGHT][WIDTH - 2];
extern int stageMap2[HEIGHT][WIDTH - 2];
extern int stageMap3[HEIGHT][WIDTH - 2];
