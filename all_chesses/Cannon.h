#ifndef CANNON_H
#define CANNON_H

/* * * * * * * * * * * * * * * * * * * * *
*   File:     Cannon.h
*   Author:   Haodong LI
*   Usage:    UsageOfFile
*   Time:     2021-05-30
* * * * * * * * * * * * * * * * * * * * * */

#include "Chess.h"
#include "global.h"

class Cannon: public Chess
{
public:
    Cannon(int x = 0, int y = 0,
           QString name = "Cannon", // empty name is illegal
           bool camp = false, // black is default
           int number = 0, // 0 is an error number, only 1-5 is legal
           bool alive = true);
};

#endif // CANNON_H
