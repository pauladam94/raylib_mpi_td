#include <stdlib.h>
#include <stdio.h>

#include "raylib.h"
// Cheatsheet RAYLIB :
// - https://www.raylib.com/cheatsheet/cheatsheet.html

typedef enum Dir {
    LEFT,
    RIGHT,
    DOWN,
    UP
} Dir;

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "raylib basic window");
    SetTargetFPS(60);

    int x = screenWidth / 2;
    int y = screenHeight / 2;
    int w = 40;
    int h = 40;
    Dir d = DOWN;
    int speed = 2;
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        switch (d) {
            case DOWN:
                x -= w * GetFrameTime() * speed;
                break;
            case LEFT:
                y -= h * GetFrameTime() * speed;
                break;
            case RIGHT:
                y += h * GetFrameTime() * speed;
                break;
            case UP:
                x += w * GetFrameTime() * speed;
                break;
        }

        int key_pressed = GetKeyPressed();
        if (key_pressed != 0) {
            printf("Just Pressed : %d\n", key_pressed);
        }

        if (IsKeyPressed(262)) {
            d = RIGHT;
        } else if (IsKeyPressed(263)) {
            d = LEFT;
        } else if (IsKeyPressed(264)) {
            d = DOWN;
        } else if (IsKeyPressed(265)) {
            d = UP;
        }

        DrawText("Welcome to raylib!", 200, 200, 40, DARKGRAY);

        DrawRectangle(x, y, w, h, RED);

        EndDrawing();
    }
  
    CloseWindow();
    return 0;
}
