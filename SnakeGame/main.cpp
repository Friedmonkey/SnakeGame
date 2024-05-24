#include "raylib.h"


//#define SW 750
//#define SH 750
//
//#define SW2 SW/2
//#define SH2 SH/2


#define CellSize 30
#define CellCount 25

#define CellAmount CellSize * CellCount


#define GREEN { 173, 204, 96, 255 }
#define DARK_GREEN { 43, 51, 24, 255 }

int main()
{
	InitWindow(CellAmount, CellAmount, "snake game lol");
	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		BeginDrawing();

		// Drawing
		ClearBackground(GREEN);
		//DrawText("Hello world", SW2/2,SH2,40,DARK_GREEN);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}