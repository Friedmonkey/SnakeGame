#pragma once
#include <deque>
#include <iostream>

#include "Settings.h"
#include "Food.h"

class Snake
{
private:
	void DrawCell(Vector2* pCell, Color color);
public:
	std::deque<Vector2> body {Vector2{6,9},Vector2{5,9} ,Vector2{4,9} };
	Vector2 direction {1, 0};

	void Draw();

	void Update();

	void FixedUpdate(Food* pFood);
};

