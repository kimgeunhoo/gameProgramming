#pragma once

// money System Header ����
// Upgrade System Header ����

#include <stdio.h> // ����� �Լ� �����ϴ� ���
#include <stdbool.h> // bool type �߰�
#include <conio.h> // _getch() �Է� ���� ���� ����� �Լ��� �����ϴ� ���
#include <time.h> // time() �õ尪�� �ð����� �ֱ����� �Լ�
#include <stdlib.h> // rand() ����� ���� ���
#include <Windows.h> // system("cls") ������ �ܼ� �Լ� ���Ե� ���

// extern : �ܺ��� CurrentMney �̸��� ���� ������ ������ �װ��� ���.

void ShowMenu();

// ShowMenu�� ���� ���� �Լ�

void Upgrade();
void ShowStatus();


// ������ ���� ����
// ��ǥ�� �޼��ߴ°�? - success ����

bool IsGameClear(); // ������ ����

// �������� ���� ����ߴ°�? - fail ����

// ���� ����

// extern ���������� ��𰣿� �����Ѵ�.
// Play.c ���� ������ ����. ���� ������ �Ѱ��� ����. 
// �����Ѵٰ� ǥ���ؾߴ�

extern int CurrentLevel;
extern int TargetLevel;
extern bool isClear;
extern bool isFail;