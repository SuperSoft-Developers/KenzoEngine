#ifndef GAME_H
#define GAME_H

class Engine;

class Game
{
public:
    Game();
    ~Game();

    void Update(Engine& engine);
    void Draw(Engine& engine);

private:
    int playerX;
    int playerY;
};

#endif // GAME_H
