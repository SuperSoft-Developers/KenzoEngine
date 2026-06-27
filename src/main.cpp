// main.cpp
#include "engine.h"
#include "game.h"

int main()
{
    Engine engine;

    if (!engine.Init("MiniConsoleEngine", 800, 600))
        return -1;

    Game game;

    while (engine.IsRunning())
    {
        engine.BeginFrame();

        game.Update(engine);
        game.Draw(engine);

        engine.EndFrame();
    }

    engine.Shutdown();
    return 0;
}
