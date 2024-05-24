#pragma once
#include <deque>
#include <iostream>

#include "Settings.h"

class Snake
{
private:
	const Color color;
public:
	Snake(Color color);
	std::deque<Vector2> body {Vector2(),Vector2() ,Vector2() };

	void Draw();
};

