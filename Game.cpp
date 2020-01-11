#ifndef GAME
#define GAME

#include "Game.hpp"

Game::Game(int mapSizeX, int mapSizeY, bool * q) : MapSizeX(), MapSizeY(), quit()
{
    // Variables
    MapSizeX = mapSizeX;
    MapSizeY = mapSizeY;
    quit = q;
    // Variables

    red = 255;
    green = 0;
    blue = 0;
}

void Game::update()
{
    if(red > 0 && blue == 0)
    {
        red--;
        green++;
    }
    if(green > 0 && red == 0)
    {
        green--;
        blue++;
    }
    if(blue > 0 && green == 0)
    {
        red++;
        blue--;
    }
}

std::vector<Pixel> Game::getChangedPixels()
{
    std::vector<Pixel> changedPixels;

    for(int x = 0; x < MapSizeX; x++)
    {
		for (int y = 0; y < MapSizeY; y++)
        {
        	changedPixels.push_back({x, y, red, green, blue, 100});
        }
    }

    return changedPixels;
}

#endif
