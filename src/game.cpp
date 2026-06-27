#include "game.h"
#include "engine.h"

#include <iostream>

Game::Game()
{
    playerX = 100;
    playerY = 100;
}

Game::~Game()
{
}

void Game::Update(Engine& engine)
{
    // Atualização do jogo

    // Exemplo:
    // playerX++;

    if (playerX > engine.GetWidth())
    {
        playerX = 0;
    }
}

void Game::Draw(Engine& engine)
{
    // Futuramente chamará o Renderer.
    std::cout << "Desenhando jogador em (" 
              << playerX << ", " 
              << playerY << ")" << std::endl;
}
