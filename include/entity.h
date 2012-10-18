#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity
{
private:
    bool isAlive_;
    double hitpoints_;
    std::string name_;
protected:
    /// Default constructor
    Entity() {}

    /// Constructor
    Entity(std::string name);
public:
    /// Virtual destructor
    virtual ~Entity() {}

    /// Returns this entity name
    const std::string& getName() const;

    /// Set this entity name
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
