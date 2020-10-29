#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<algorithm>

using namespace std; //using std::

//Classes

class Fighter //fighter
{
private:
    std::string name;

    int health;

    int damagePerAttack;

    static int figthers_count;
public:
    Fighter(std::string name, int health, int damagePerAttack)
    {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
        figthers_count++;
    }

    ~Fighter() { };

    std::string getName()
    {
        return name;
    }

    int getHealth()
    {
        return health;
    }

    int getDamagePerAttack()
    {
        return damagePerAttack;
    }

    void setHealth(int value)
    {
        health = value;
    }
  
};
//Static Variables Intializations
int Fighter::figthers_count = 0;

//function Prototypes
string declareWinner(Fighter *fighter1 , Fighter *fighter2, string FirstAttack);
//Driver Code

int main(void)
{
    Fighter fighter1("Lew", 10, 2);
    Fighter fighter2("Harry", 5, 4);
    cout<<declareWinner(&fighter1, &fighter2, "Lew");
    return 0;
}

string declareWinner(Fighter *fighter1 , Fighter *fighter2, string FirstAttack)
{
    int holder;
    if(fighter1->getName() == FirstAttack)
    {
        holder = fighter2->getHealth() - fighter1->getDamagePerAttack();
        fighter2->setHealth(holder);
    }
    else if(fighter2->getName() == FirstAttack)
    {
        holder = fighter1->getHealth() - fighter2->getDamagePerAttack();
        fighter1->setHealth(holder);
    }
    if(fighter1->getHealth() >= fighter2->getHealth())
        return fighter1->getName();
    else if(fighter2->getHealth() >= fighter1->getHealth())
        return fighter2->getName();
    return "";
}