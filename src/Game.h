#ifndef GAME_H
#define GAME_H
//------------------------------------------------------------------------------
// Game.h
// Description : 
// 
// Author : Stefan Papst
// Softwareengeneering and Businessmanagement @ TU GRAZ
//------------------------------------------------------------------------------   

#include "InitWindow.h"
#include "Player.h"


class Game
{

  private:
  bool start_game_;

  public:

    Game();

    Game(const Game& origin) = delete;

    void run();
};
#endif GAME_H