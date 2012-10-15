#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity
{
private:
    bool isAlive_;
    double hitpoints_;
    std::string name_;
public:
    /// Default constructor
    Entity() {}

    /// Constructor
    Entity(std::string name);

    /// Returns this entity name
    const std::string& getName() const;

    void setName(std::string);

    /// Deal damage to this entity
    void dealDamage(short dmg);

    /// Return state if entity is alive
    bool isAlive() const;
};

inline const std::string& Entity::getName() const
{
    return name_;
}

inline bool Entity::isAlive() const
{
    return isAlive_;
}

#endif // ENTITY_H
