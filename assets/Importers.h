#ifndef IMPORTERS_H
#define IMPORTERS_H

#include <string>

bool ImportSprite(const std::string& file);
bool ImportAudio(const std::string& file);
bool ImportFont(const std::string& file);
bool ImportMap(const std::string& file);
bool ImportShader(const std::string& file);

#endif
