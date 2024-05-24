#pragma once

#include "Settings.h"

class Food
{
private:
	const Color color;
public:
	Texture2D texture;

	Food(Color color);
	~Food();

	Vector2 pos {5,6};

	void Draw();

	Vector2 GenerateRandomPos();
};

