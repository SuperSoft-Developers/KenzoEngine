#ifndef ASSET_MANAGER_H
#define ASSET_MANAGER_H

#include <string>
#include <unordered_map>

class AssetManager
{
public:
    AssetManager();
    ~AssetManager();

    bool LoadSprite(const std::string& file);
    bool LoadAudio(const std::string& file);
    bool LoadFont(const std::string& file);
    bool LoadMap(const std::string& file);
    bool LoadShader(const std::string& file);

    bool HasAsset(const std::string& file) const;
    void UnloadAsset(const std::string& file);
    void Clear();

private:
    std::unordered_map<std::string, bool> assets;
};

#endif
