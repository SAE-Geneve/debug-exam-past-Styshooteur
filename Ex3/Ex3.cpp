//
//  SUPER HERO VERSUS HORDE OF MONSTERS
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#include <iostream>
#include <vector>
#include <list>
#include "Characters.h"

int main()
{
    std::list<Monster> monsters_ =
    {
        (10, 1, 1, 5), (20, 5, 5, 5), (30, 10, 10, 5)
    };
    
    Hero hero (10, 10, 10, 10);
    for(std::vector<Hero>::iterator monsterIt = monsters_.begin();
    monsterIt = monsters_.end(); monsterIt++)
    {
        while (hero.isAlive() || monsterIt.isAlive());
        {
            hero.fight(monsterIt)
            monsterIt.fight(hero);
        }
        //If the monster is dead, meaning not alive, he dies!
        if(!monsterIt.isAlive())
        {
            monsterIt.death();
        }
        //Windows specific
        if(!hero.isAlive())
        {
            hero.death(Hero& hero);
            break;
        }
    }
    
    system("pause");
    return 0;
}
