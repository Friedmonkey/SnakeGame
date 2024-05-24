#include "raylib.h"
#include "Food.h"
#include "Snake.h"

#define CellSize 30
#define CellCount 25

#define CellAmount CellSize * CellCount


#define GREEN Color { 173, 204, 96, 255 }
#define DARK_GREEN Color { 43, 51, 24, 255 }


int main()
{
	InitWindow(CellAmount, CellAmount, "snake game lol");
	SetTargetFPS(60);

	//the classes need to be created AFTER initWindow to allow it to load the textures
	Food food = Food(CellSize, DARK_GREEN);
	Snake snake = Snake(CellSize, DARK_GREEN);

	while (!WindowShouldClose())
	{
		BeginDrawing();

		// Drawing
		ClearBackground(GREEN);

		food.Draw();
		snake.Draw();


		//DrawText("Hello world", SW2/2,SH2,40,DARK_GREEN);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}