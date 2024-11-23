#include "cutter.h"


int main()
{


    const int screenWidth = 800;
    const int screenHeight = 450;
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    const char* helloWorld = "Congrats! You created your first window!";
    SetTargetFPS(60);              
    Line b1=Line();
    drawParameters lineParams = drawParameters();
    lineParams.color = RED;
    lineParams.posX = GetScreenWidth()/2;
    lineParams.length = 500;
    lineParams.posY = 200;
    lineParams.height = 500;
    
    
    while (!WindowShouldClose())    
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText(helloWorld, (GetScreenWidth()-MeasureText(helloWorld,20))/2, GetScreenHeight() / 2, 20, LIGHTGRAY);
        b1.draw(lineParams);


        EndDrawing();
        
    }

    CloseWindow();        


	
	return 0;
}
