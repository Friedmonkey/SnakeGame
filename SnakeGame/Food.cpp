#include "Food.h"

Food::Food()
{
	Image image = LoadImage("./Graphics/apole.png");
	texture = LoadTextureFromImage(image);
	UnloadImage(image);
	pos = GenerateRandomPos();
}

Food::~Food()
{
	UnloadTexture(texture);
}

void Food::Draw()
{
	//DrawRectangle(pos.x * _cellSize, pos.y * _cellSize, _cellSize, _cellSize, color);
	DrawTexture(texture, pos.x * CellSize, pos.y * CellSize, WHITE);
}

Vector2 Food::GenerateRandomPos()
{
	float x = GetRandomValue(0, CellCount -1);
	float y = GetRandomValue(0, CellCount -1);
	return Vector2{x,y};
}