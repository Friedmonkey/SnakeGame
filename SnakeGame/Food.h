#pragma once

#include "Settings.h"

class Food
{
public:
	Texture2D texture;

	Food();
	~Food();

	Vector2 pos {5,6};

	void Draw();

	Vector2 GenerateRandomPos();
};

