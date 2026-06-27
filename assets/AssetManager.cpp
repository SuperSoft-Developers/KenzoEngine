#include "AssetManager.h"
#include "Importers.h"

AssetManager::AssetManager()
{
}

AssetManager::~AssetManager()
{
    Clear();
}

bool AssetManager::LoadSprite(const std::string& file)
{
    if (ImportSprite(file))
    {
        assets[file] = true;
        return true;
    }
    return false;
}

bool AssetManager::LoadAudio(const std::string& file)
{
    if (ImportAudio(file))
    {
        assets[file] = true;
        return true;
    }
    return false;
}

bool AssetManager::LoadFont(const std::string& file)
{
    if (ImportFont(file))
    {
        assets[file] = true;
        return true;
    }
    return false;
}

bool AssetManager::LoadMap(const std::string& file)
{
    if (ImportMap(file))
    {
        assets[file] = true;
        return true;
    }
    return false;
}

bool AssetManager::LoadShader(const std::string& file)
{
    if (ImportShader(file))
    {
        assets[file] = true;
        return true;
    }
    return false;
}

bool AssetManager::HasAsset(const std::string& file) const
{
    return assets.count(file) > 0;
}

void AssetManager::UnloadAsset(const std::string& file)
{
    assets.erase(file);
}

void AssetManager::Clear()
{
    assets.clear();
}
