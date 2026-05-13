#pragma once
#include <windows.h>
#include <conio.h>
#include <vector>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int GetKey();
COORD GetPosFromKey(int key);
COORD KeyMovement(COORD currentPos);
