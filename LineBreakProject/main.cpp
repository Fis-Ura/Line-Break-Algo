/*
vcxproj properties setup:
- C/C++ > general > additional include folder > $(SolutionDir)include\raylib; $(SolutionDir)include\
- C/C++ > general > preprocessor > GRAPHICS_API_OPENGL_33; PLATFORM_DESKTOP
- Linker > general > additional Library Directory > $(SolutionDir)Lib\$(Platform)\$(Configuration)\
- Linker > input > additional dependencies > raylib.lib;winmm.lib
*/
#include "raylib.h"
#include "WordWrapAlgo.h"
#include <iostream>
using namespace WordWrap;

int main()
{
     //Initialisation
    const int screenWidth = 300;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Bdeb - core window");
    SetTargetFPS(60);                 

    Font fDeja = LoadFont("resources/font/DejaVuSerif-Bold.ttf");

    Rectangle container = { 25.0f, 25.0f, screenWidth - 50.0f, screenHeight - 250.0f };
    const char text[] = "The sudden awakening of their powers caused people to panic, and one by one their Forces went berserk. The resulting damage was catastrophic, and Callegea fell into chaos...";
    //std::cout << tempText;
    // Main game loop      

    DrawTextBoxed(
       fDeja,
       text,
       Rectangle{ container.x + 4, container.y + 60, container.width - 4, container.height - 4 },
       20.0f,
       0.0f);

    system("pause");

    UnloadFont(fDeja);
}
