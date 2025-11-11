# C++ - Module 03
Inheritance

**Summary:**
This document contains the exercises of Module 03 from C++ modules.

**Version:**
8.0

## [Exercise 00: Aaaaand... OPEN!](https://github.com/3ka1tz/cpp03/tree/main/project/ex00)

Turn-in directory: ex00/

Files to turn in: `Makefile, main.cpp, ClapTrap.{h, hpp}, ClapTrap.cpp`

Forbidden functions: None

First, you have to implement a class! How original!

It will be called **ClapTrap** and will have the following private attributes initialized to the values specified in brackets:
- Name, which is passed as a parameter to the constructor
- Hit points (10), representing the health of the ClapTrap
- Energy points (10)
- Attack damage (0)

Add the following public member functions so that the ClapTrap behaves more realistically:
- `void attack(const std::string& target);`
- `void takeDamage(unsigned int amount);`
- `void beRepaired(unsigned int amount);`

When ClapTrap attacks, it causes its target to lose `<attack damage>` hit points. When ClapTrap repairs itself, it regains `<amount>` hit points. Attacking and repairing each cost 1 energy point. Of course, ClapTrap can’t do anything if it has no hit points or energy points left. However, since these exercises serve as an introduction, the ClapTrap instances should not interact directly with one another, and the parameters will not refer to another instance of ClapTrap.

In all of these member functions, you need to print a message to describe what happens. For example, the `attack()` function may display something like (of course, without the angle brackets):

`ClapTrap <name> attacks <target>, causing <damage> points of damage!`

The constructors and destructor must also display a message, so your peer-evaluators can easily see that they have been called.

Implement and turn in your own tests to ensure your code works as expected.

## [Exercise 01: Serena, my love!](https://github.com/3ka1tz/cpp03/tree/main/project/ex01)

Turn-in directory: ex01/

Files to turn in: `Files from the previous exercise + ScavTrap.{h, hpp}, ScavTrap.cpp`

Forbidden functions: None

Because you can never have enough ClapTraps, you will now create a derived robot. It will be named **ScavTrap** and will inherit the constructors and destructor from ClapTrap. However, its constructors, destructor, and `attack()` will print different messages. After all, ClapTraps are aware of their individuality.

Note that proper construction/destruction chaining must be shown in your tests. When a ScavTrap is created, the program starts by constructing a ClapTrap. Destruction occurs in reverse order. Why?

**ScavTrap** will use the attributes of ClapTrap (update ClapTrap accordingly) and must initialize them to:
- Name, which is passed as a parameter to the constructor
- Hit points (100), representing the health of the ClapTrap
- Energy points (50)
- Attack damage (20)

ScavTrap will also have its own special ability:

`void guardGate();`

This member function will display a message indicating that ScavTrap is now in Gate keeper mode.

Don’t forget to add more tests to your program.

## [Exercise 02: Repetitive work](https://github.com/3ka1tz/cpp03/tree/main/project/ex02)

Turn-in directory: ex02/

Files to turn in: `Files from previous exercises + FragTrap.{h, hpp}, FragTrap.cpp`

Forbidden functions: None

Making ClapTraps is probably starting to get on your nerves.

Now, implement a **FragTrap** class that inherits from ClapTrap. It is very similar to ScavTrap. However, its construction and destruction messages must be different. Proper construction/destruction chaining must be shown in your tests. When a FragTrap is created, the program starts by constructing a ClapTrap. Destruction occurs in reverse order.

Same goes for the attributes, but with different values this time:
- Name, which is passed as a parameter to the constructor
- Hit points (100), representing the health of the ClapTrap
- Energy points (100)
- Attack damage (30)

FragTrap has a special ability too:

`void highFivesGuys(void);`

This member function displays a positive high-fives request on the standard output.

Again, add more tests to your program.
