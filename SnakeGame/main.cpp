#include "Food.h"
#include "Game.h"
#include "Settings.h"

double lastUpdateTime {0};

bool eventTriggerd(double interval)
{
	double currentTime = GetTime();
	if (currentTime - lastUpdateTime >= interval)
	{
		lastUpdateTime = currentTime;
		return true;
	}
	return false;
}

int main()
{
	InitWindow(CellAmount, CellAmount, "snake game lol");
	SetTargetFPS(60);

	//the class need to be created AFTER initWindow to allow it to load the textures
	Game game = Game();

	while (!WindowShouldClose())
	{
		BeginDrawing();

		//Fixed time step updating
		if (eventTriggerd(0.2))
		{
			//gets called every 0.2 seconds
			game.FixedUpdate();
		}

		//Updating
		game.Update();

		// Drawing
		ClearBackground(GREEN);
		game.Draw();

		EndDrawing();
	}

	CloseWindow();

	return 0;
}