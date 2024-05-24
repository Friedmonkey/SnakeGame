#pragma once
#include "Settings.h"
#include "Snake.h"
#include "Food.h"

class Game
{
public:
	Snake snake = Snake();
	Food food = Food();

	void FixedUpdate();

	void Update();

	void Draw();
};

