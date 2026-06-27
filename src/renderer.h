#ifndef RENDERER_H
#define RENDERER_H

#include <string>

class Renderer
{
public:
    Renderer();
    ~Renderer();

    bool Init();

    void Clear();

    void DrawSprite(
        const std::string& image,
        int x,
        int y
    );

    void DrawText(
        const std::string& text,
        int x,
        int y
    );

    void Present();

    void Shutdown();
};

#endif // RENDERER_H
