#include <iostream>
#include "KeyMovement.h"

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

    COORD currentPos = startPos;
    while (1)
    {        
        COORD newPosition = KeyMovement(currentPos);
        SetCursorPosition(newPosition);
        currentPos = newPosition;
        cout << "#" << endl;

    }

    return 0;
    
}
