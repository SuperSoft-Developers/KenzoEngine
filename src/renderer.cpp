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
    std::cout << "[Renderer] Inicializado." << std::endl;
    return true;
}

void Renderer::Clear()
{
    //
