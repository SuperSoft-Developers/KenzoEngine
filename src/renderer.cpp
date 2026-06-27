// renderer.cpp

#include "renderer.h"

#include <iostream>

Renderer::Renderer()
{
}

Renderer::~Renderer()
{
}

bool Renderer::Init()
{
    std::cout << "[Renderer] Inicializado com sucesso." << std::endl;
    return true;
}

void Renderer::Clear()
{
    // Limpa a tela (implementação futura)
}

void Renderer::DrawSprite(const std::string& image, int x, int y)
{
    std::cout << "[Sprite] "
              << image
              << " X=" << x
              << " Y=" << y
              << std::endl;
}

void Renderer::DrawText(const std::string& text, int x, int y)
{
    std::cout << "[Texto] \""
              << text
              << "\" X=" << x
              << " Y=" << y
              << std::endl;
}

void Renderer::Present()
{
    // Atualiza a tela (implementação futura)
}

void Renderer::Shutdown()
{
    std::cout << "[Renderer] Finalizado." << std::endl;
}
