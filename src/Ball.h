#ifndef BALL_H
#define BALL_H
//------------------------------------------------------------------------------
// Ball.h
// Description : 
// 
// Author : Stefan Papst
// Softwareengeneering and Businessmanagement @ TU GRAZ
//------------------------------------------------------------------------------   

#include "InitWindow.h"
#include "Player.h"

enum Result { LEFT_WON, RIGHT_WON, NOTHING };

class Ball
{
private:
  sf::CircleShape ball;
  //float speed_x;
  //float speed_y;
  sf::Vector2f speed_up;



public:

	Ball() : speed_up(0.f, 0.f) { }	//speed_x(0.f), speed_y(0.f) , speed_up(5.f, 5.f) { }

  void create(const InitWindow& Window);

  Result update(const InitWindow& window, Player& player_left, Player& player_right, int& state);

  void resetBallPos(const InitWindow& window);

  void setSpeed(float x, float y);

  sf::CircleShape& getBall();


};











#endif BALL_H