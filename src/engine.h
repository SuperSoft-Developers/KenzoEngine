#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine
{
public:
    Engine();
    ~Engine();

    // Inicializa a engine
    bool Init(const std::string& title, int width, int height);

    // Loop principal
    bool IsRunning() const;
    void BeginFrame();
    void EndFrame();

    // Encerra a engine
    void Shutdown();

    // Informações da janela
    int GetWidth() const;
    int GetHeight() const;
    std::string GetTitle() const;

    // Controle da engine
    void Quit();

private:
    bool running;
    int width;
    int height;
    std::string title;
};

#endif // ENGINE_H
