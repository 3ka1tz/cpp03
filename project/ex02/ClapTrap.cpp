#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " constructed" <<  std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;

    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " can't attack because it has no hit points left" << std::endl;
        return;
    }

    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " can't attack because it has no energy points left" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;

    _energyPoints--;
    std::cout << "ClapTrap " << _name << " now has " << _energyPoints << " energy points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " can't take more damage because it already has no hit points left" << std::endl;
        return;
    }

    unsigned int damageTaken = (amount > _hitPoints) ? _hitPoints : amount;
    _hitPoints -= damageTaken;
    std::cout << "ClapTrap " << _name << " takes " << damageTaken << " points of damage" << std::endl;

    std::cout << "ClapTrap " << _name << " now has " << _hitPoints << " hit points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " can't repair itself because it has no hit points left" << std::endl;
        return;
    }

    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " can't repair itself because it has no energy points left" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << _name << " repairs itself regaining " << amount << " hit points" << std::endl;

    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " now has " << _hitPoints << " hit points left" << std::endl;

    _energyPoints--;
    std::cout << "ClapTrap " << _name << " now has " << _energyPoints << " energy points left" << std::endl;
}
