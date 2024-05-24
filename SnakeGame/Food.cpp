#include "Food.h"

Food::Food(int cellSize, Color color) : _cellSize(cellSize), color(color)
{
	Image image = LoadImage("./Graphics/apole.png");
	texture = LoadTextureFromImage(image);
	UnloadImage(image);
}

Food::~Food()
{
	UnloadTexture(texture);
}

void Food::Draw()
{
	//DrawRectangle(pos.x * _cellSize, pos.y * _cellSize, _cellSize, _cellSize, color);
	DrawTexture(texture, pos.x * _cellSize, pos.y * _cellSize, WHITE);
}