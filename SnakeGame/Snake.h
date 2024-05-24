#pragma once
#include <deque>
#include <iostream>
#include <raylib.h>

class Snake
{
private:
	const Color color;
	const int _cellSize;
public:
	Snake(int cellSize, Color color);
	std::deque<Vector2> body {Vector2(),Vector2() ,Vector2() };

	void Draw();
};

