#pragma once

#include <raylib.h>

class Food
{
private:
	const int _cellSize;
	const Color color;
public:
	Texture2D texture;

	Food(int cellSize, Color color);
	~Food();

	void Load();

	Vector2 pos {5,6};

	void Draw();
};

