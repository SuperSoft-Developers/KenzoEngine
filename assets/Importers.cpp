#include "Importers.h"
#include <iostream>

bool ImportSprite(const std::string& file)
{
    std::cout << "Importando sprite: " << file << std::endl;
    return true;
}

bool ImportAudio(const std::string& file)
{
    std::cout << "Importando áudio: " << file << std::endl;
    return true;
}

bool ImportFont(const std::string& file)
{
    std::cout << "Importando fonte: " << file << std::endl;
    return true;
}

bool ImportMap(const std::string& file)
{
    std::cout << "Importando mapa: " << file << std::endl;
    return true;
}

bool ImportShader(const std::string& file)
{
    std::cout << "Importando shader: " << file << std::endl;
    return true;
}
