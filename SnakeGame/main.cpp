#include "Food.h"
#include "Snake.h"
#include "Settings.h"


int main()
{
	InitWindow(CellAmount, CellAmount, "snake game lol");
	SetTargetFPS(60);

	//the classes need to be created AFTER initWindow to allow it to load the textures
	Food food = Food(DARK_GREEN);
	Snake snake = Snake(DARK_GREEN);

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