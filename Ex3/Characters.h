//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#pragma once

#include <iostream>

class Character
{
public:
    Character(int, int, int, int);
    bool isAlive();
    virtual void death() = 0;
    int getHealth();
    int getDefense();
    int getAttack();
    int getStrength();
    void setHealth(int health) { health_ = health; }
protected:
    int health_;
    int attack_;
    int defense_;
    int strength_;
};

class Monster : public Character
{
    
public:
    Monster();
    void fight(Monster& hero);
    void death(Monster& monster);
};

class Hero : Character
{
public:
    Hero();
    void fight(Hero& monster);
    void death(Hero& hero);
};




