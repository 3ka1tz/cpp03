#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("Default") {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30; 
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
    std::cout << "FragTrap constructor called for " << name <<  std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called for " << name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    ClapTrap::operator=(other);
    std::cout << "FragTrap copy assignment operator called for " << name << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << name << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (hitPoints <= 0) {
        std::cout << "FragTrap " << name << " can't attack because it has no hit points left" << std::endl;
        return;
    }

    if (energyPoints <= 0) {
        std::cout << "FragTrap " << name << " can't attack because it has no energy points left" << std::endl;
        return;
    }

    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage" << std::endl;
    energyPoints--;
    std::cout << "FragTrap " << name << " now has " << energyPoints << " energy points left" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " is making a positive high-fives request" << std::endl;
}
