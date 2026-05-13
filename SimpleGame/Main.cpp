#include <iostream>
#include "KeyMovements.h"

using namespace std;


void SetCursorPosition(COORD posFromKey)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), posFromKey);
};


int main(int argc, char** argv)
{
    COORD startPos = { 0, 0 };
    SetCursorPosition(startPos);
    cout << "#" << endl;

    KeyMovements keyMovements;

    COORD currentPos = startPos;
    while (1)
    {        
        COORD newPosition = keyMovements.KeyMovement(currentPos);
        SetCursorPosition(newPosition);
        currentPos = newPosition;
        cout << "#" << endl;

    }

    return 0;
    
}
