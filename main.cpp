#include "raylib.h"


Color green = {173, 204, 95, 255};
Color darkGreen = {43, 51, 24, 255};

int cellSize = 25;
int cellCount = 25;

class Food{

public:
    Vector2 position = {5, 6};

    Food(){

    }

    void Draw()
    {
        DrawRectangle(position.x*cellSize, position.y*cellSize, cellSize, cellSize, darkGreen);

    }
};

int main(void)
{
    InitWindow(cellSize*cellCount, cellCount*cellSize, "Retro snake");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(green);
        DrawRectangle(10, 10, 10, 10, darkGreen);
           
        EndDrawing();
    }

    CloseWindow();

    return 0;
}