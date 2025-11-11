#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap() : ClapTrap("Default") {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;

    std::cout << "FragTrap " << _name << " constructed" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;

    std::cout << "FragTrap " << _name << " constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;

    ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " destructed" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_hitPoints <= 0) {
        std::cout << "FragTrap " << _name << " can't attack because it has no hit points left" << std::endl;
        return;
    }

    if (_energyPoints <= 0) {
        std::cout << "FragTrap " << _name << " can't attack because it has no energy points left" << std::endl;
        return;
    }

    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;

    _energyPoints--;
    std::cout << "FragTrap " << _name << " now has " << _energyPoints << " energy points left" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " is making a positive high-fives request" << std::endl;
}
