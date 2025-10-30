#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("TrapClap");

    claptrap.attack("?");
    claptrap.takeDamage(9);
    claptrap.beRepaired(1);
    claptrap.beRepaired(1);
    claptrap.beRepaired(1);
    claptrap.beRepaired(1);
    claptrap.beRepaired(1);
    claptrap.beRepaired(1);
    claptrap.beRepaired(1);
    claptrap.beRepaired(1);
    claptrap.beRepaired(1);
    claptrap.beRepaired(1);
    claptrap.takeDamage(12);
    claptrap.attack("?");
    claptrap.takeDamage(1);
    claptrap.beRepaired(1);

    return 0;
}
