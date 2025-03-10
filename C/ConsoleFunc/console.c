#include "console.h"

void SetColor(unsigned char _BGColor, unsigned char _TextColor)
{
	if (_BGColor > 15 || _TextColor > 15) return; // 1000 1000

	unsigned short ColorNum = (_BGColor << 4) | _TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);

}
