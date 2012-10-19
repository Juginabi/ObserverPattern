#include "../include/entity.h"
#include <iostream>

Entity::Entity(std::string name) :
    isAlive_(true),
    hitpoints_(10),
    name_(name)
{
}

void Entity::dealDamage(short dmg)
{
    hitpoints_ -= dmg;
    if (hitpoints_ <= 0)
        isAlive_ = false;
}

void Entity::setName(std::string name)
{
    name_ = name;
}

void Entity::setStatus(bool status)
{
    isAlive_ = status;
}
