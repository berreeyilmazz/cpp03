#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    ScavTrap berre("berre");
    berre.attack("yusuf");
    berre.takeDamage(2);
    berre.beRepaired(12);
    berre.guardGate();
    berre.guardGate();
}