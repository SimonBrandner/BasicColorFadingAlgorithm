#ifndef GAMECLASS
#define GAMECLASS

#include <iostream>
#include <vector>
#include <cstdlib>

#include "Main.hpp"

class Game
{
public:
    Game(int, int, bool *);
    std::vector<Pixel> getChangedPixels();

    void update();
private:
    int MapSizeX;
    int MapSizeY;
    int red;
    int green;
    int blue;

    bool * quit;
};

#endif
