//
//  Characters.cpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#include "Characters.h"

//////////Character////////////

Character::Character(int health, int attack, int defense, int strength)
{
    health_ = health;
    attack_ = attack;
    defense_ = defense;
    strength_ = strength;
}

bool Character::isAlive()
{
    if (getHealth() > 0)
    {
        return true;
    }
    return false;
}



int Character::getAttack()
{
    return attack_;
}

int Character::getDefense()
{
    return defense_;
}

int Character::getHealth()
{
    return health_;
}

int Character::getStrength()
{
    return strength_;
}


//////////Monster////////////

Monster::Monster() : Character(50, 5, 2, 10) {}

void Monster::fight(Monster& hero)
{
    int damagemonster = getAttack() - hero.getDefense();
    if (damagemonster <= 0) {
        damagemonster = 0;
    }
    if(damagemonster > 0)
        damagemonster = getStrength();
    
    std::cout << "Monster gives "<< damagemonster <<" to Hero\n";
    hero.setHealth(hero.getHealth() - getStrength());
}

void Monster::death(Monster& monster)
{
    if(monster.getHealth() <= 0)
    std::cout << "Yet another dead monster!\n";
}

//////////Hero////////////

Hero::Hero() : Character(200, 20, 5, 15) {}

void Hero::fight(Hero& monster)
{
    int damagehero = getAttack() - monster.getDefense();
    if (damagehero <= 0) {
        damagehero = 0;
    }
    if (damagehero > 0)
        damagehero = getStrength();

    std::cout << "Hero gives " << damagehero << " to Monster\n";
    monster.setHealth(monster.getHealth() - getStrength());
}

void Hero::death(Hero& hero)
{
    if(hero.getHealth() <= 0)
    std::cout << "The hero is dead, long live the hero!\n";
}
