#include "Game.h"

void Game::FixedUpdate()
{
	snake.FixedUpdate(&food);
}

void Game::Update()
{
	snake.Update();
}

void Game::Draw()
{
	food.Draw();
	snake.Draw();
}
