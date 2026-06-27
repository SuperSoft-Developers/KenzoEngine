
#include "engine.h"
#include <iostream>

Engine::Engine()
{
    running = false;
    width = 0;
    height = 0;
    title = "MiniConsoleEngine";
}

Engine::~Engine()
{
}

bool Engine::Init(const std::string& windowTitle, int windowWidth, int windowHeight)
{
    title = windowTitle;
    width = windowWidth;
    height = windowHeight;
    running = true;

    std::cout << "=================================\n";
    std::cout << "MiniConsoleEngine iniciada\n";
    std::cout << "Titulo : " << title << "\n";
    std::cout << "Resolucao: " << width << "x" << height << "\n";
    std::cout << "=================================\n";

    return true;
}

bool Engine::IsRunning() const
{
    return running;
}

void Engine::BeginFrame()
{
    // Atualização de entrada e limpeza da tela
}

void Engine::EndFrame()
{
    // Renderização final
}

void Engine::Shutdown()
{
    std::cout << "Engine encerrada.\n";
    running = false;
}

int Engine::GetWidth() const
{
    return width;
}

int Engine::GetHeight() const
{
    return height;
}

std::string Engine::GetTitle() const
{
    return title;
}

void Engine::Quit()
{
    running = false;
}
