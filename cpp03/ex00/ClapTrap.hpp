#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
    private:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public:
    	ClapTrap();
		ClapTrap(const ClapTrap &a);
		ClapTrap& operator=(const ClapTrap& CopiedBy);
		~ClapTrap();
        ClapTrap(std::string _name);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
