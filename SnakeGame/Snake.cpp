#include "Snake.h"
#include <Raymath.h>

void Snake::Draw()
{
	for (size_t i = 1; i < body.size(); i++)
	{
		DrawCell(&body[i], DARK_GREEN);
	}
	DrawCell(&body[0], DARKGREEN); //draw the head
}

void Snake::DrawCell(Vector2 *pCell, Color color)
{
	Rectangle rect = Rectangle{ pCell->x * CellSize ,pCell->y * CellSize, CellSize, CellSize };
	DrawRectangleRounded(rect, 0.5, 6, color);
}

void Snake::Update()
{
	Vector2 currentDirection = Vector2Subtract(body[0], body[1]);

	//handle input
	if (IsKeyPressed(KEY_UP) && currentDirection.y != 1)
	{
		direction = {0, -1};
	}
	if (IsKeyPressed(KEY_DOWN) && currentDirection.y != -1)
	{
		direction = { 0, 1 };
	}
	if (IsKeyPressed(KEY_LEFT) && currentDirection.x != 1)
	{
		direction = { -1, 0 };
	}
	if (IsKeyPressed(KEY_RIGHT) && currentDirection.x != -1)
	{
		direction = { 1, 0 };
	}
}
void Snake::FixedUpdate(Food *pFood)
{
	//handle the snake moving
	Vector2 head = body[0];

	if (Vector2Equals(head, pFood->pos))
	{
		//the food has been eaten, we dont pop the last
		pFood->pos = pFood->GenerateRandomPos(); //get a new location
	}
	else
	{
		//the food has not been eaten, we remove the last
		body.pop_back();
	}
	body.push_front(Vector2Add(head, direction));
}