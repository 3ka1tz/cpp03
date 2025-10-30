#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap constructor called for " << name <<  std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " can't attack because has no hit points left" << std::endl;
        return;
    }

    if (energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " can't attack because has no energy points left" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage" << std::endl;
    energyPoints--;
    std::cout << "ClapTrap " << name << " now has " << energyPoints << " energy points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints == 0) {
        std::cout << "ClapTrap " << name << " is already fainted and can't take more damage" << std::endl;
        return;
    }

    unsigned int damageTaken = (amount > hitPoints) ? hitPoints : amount;
    hitPoints -= damageTaken;

    std::cout << "ClapTrap " << name << " takes " << damageTaken << " damage" << std::endl;
    std::cout << "ClapTrap " << name << " now has " << hitPoints << " hit points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " can't repair itself because has no energy points left" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << name << " repairs itself regaining " << amount << " hit points" << std::endl;
    hitPoints += amount;
    energyPoints--;
}
