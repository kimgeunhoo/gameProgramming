#pragma once

// money System Header 구현
// Upgrade System Header 구현

#include <stdio.h> // 입출력 함수 포함하는 헤더
#include <stdbool.h> // bool type 추가
#include <conio.h> // _getch() 입력 버퍼 없이 입출력 함수를 포함하는 헤더
#include <time.h> // time() 시드값을 시간으로 넣기위한 함수
#include <stdlib.h> // rand() 사용을 위한 헤더
#include <Windows.h> // system("cls") 윈도우 콘솔 함수 포함된 헤더

// extern : 외부의 CurrentMney 이름이 같은 변수가 있으니 그것을 사용.

void ShowMenu();

// ShowMenu에 따른 실행 함수

void Upgrade();
void ShowStatus();


// 게임의 종료 조건
// 목표를 달성했는가? - success 성공

bool IsGameClear(); // 무기의 레벨

// 소지금을 전부 사용했는가? - fail 실패

// 전역 변수

// extern 전역변수가 어디간에 존재한다.
// Play.c 전역 변수의 정의. 전역 변수는 한개만 존재. 
// 존재한다고만 표시해야댐

extern int CurrentLevel;
extern int TargetLevel;
extern bool isClear;
extern bool isFail;