#pragma once
#include <stdio.h>


#define WIDTH 42  // �� ���� ũ��
#define HEIGHT 23 // �� ���� ũ��

void ShowBorder();

void MenuBorder();
void ClearBorder();
void printStage();
void printStage2();
void printStage3();

extern int stageMap[HEIGHT][WIDTH - 2];
extern int stageMap2[HEIGHT][WIDTH - 2];
extern int stageMap3[HEIGHT][WIDTH - 2];
