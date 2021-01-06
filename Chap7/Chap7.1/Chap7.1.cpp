// Chap7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

enum class MonsterType
{
    orge,
    dragon,
    orc,
    giant_spider,
    slime
};

struct Monster
{
    MonsterType type{};
    std::string name{};
    int health{};
};

std::string getMonsterType(MonsterType Type)
{
    
    if (Type == MonsterType::orge)
        return "Orge"; 
    else if(Type == MonsterType::dragon)
        return "Dragon";
    else if(Type == MonsterType::orc)
        return "Orc";
    else if(Type == MonsterType::giant_spider)
        return "Giant Spider";
    else if(Type == MonsterType::slime)
        return "Slime";
    else
        return "Invalid Input";
}

void printMonsterType(Monster monster)
{
    std::cout << getMonsterType(monster.type) <<
        " is named " << monster.name <<
        " and has " << monster.health << " health.\n";
}

int main()
{
    Monster orge{ MonsterType::orge, "Torg", 130 };
    Monster slime{ MonsterType::slime, "Blurp", 55};
    
    printMonsterType(orge);
    printMonsterType(slime);

    std::cout << getMonsterType(MonsterType::slime) <<'\n';

}


