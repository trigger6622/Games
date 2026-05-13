#include "KeyMovements.h"


int KeyMovements::GetKey()
{
    int c = 0;
    switch ((c = _getch())) {
    case KEY_UP:
        return KEY_UP;
        break;
    case KEY_DOWN:
        return KEY_DOWN;
        break;
    case KEY_LEFT:
        return KEY_LEFT;
        break;
    case KEY_RIGHT:
        return KEY_RIGHT;
        break;
    default:
        break;
    };
};

COORD KeyMovements::GetPosFromKey(int key)
{
    int x = 0;
    int y = 0;

    switch (key) {
    case KEY_UP:
        y--;
        break;
    case KEY_DOWN:
        y++;
        break;
    case KEY_LEFT:
        x--;
        break;
    case KEY_RIGHT:
        x++;
        break;
    default:
        break;
    };

    COORD pos = { x, y };
    return pos;
};

COORD KeyMovements::KeyMovement(COORD currentPos)
{
    int pressedKey = GetKey();
    COORD posValueToAdd = GetPosFromKey(pressedKey);

    COORD newPosition;
    newPosition.X = currentPos.X + posValueToAdd.X;
    newPosition.Y = currentPos.Y + posValueToAdd.Y;
    system("cls");
    if (newPosition.X < 0)
    {
        newPosition.X = 0;
    }

    if (newPosition.Y < 0)
    {
        newPosition.Y = 0;
    }

    return newPosition; 
}