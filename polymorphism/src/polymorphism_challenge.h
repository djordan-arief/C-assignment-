#include <iostream>

class Player {
    friend class MainVilain;
public:
    std::string player_name; 
    int health; 
    int xp; 
    int level; 
    int power; 

    // Constructor // Destructor
    Player (std::string name, int health, int xp, int level, int power)
        : player_name{name}, 
        health{health}, 
        xp{xp}, 
        level{level}, 
        power{power}
    {
        // code
    }

    Player ()
        : Player{" ", 0, 0, 0, 0}
    {
        // code
    }

    virtual ~ Player ()
    {
        // code
    }

    // methods
    virtual void attack (Player &) = 0; 
    virtual void generate_health (Player &) = 0; 
};

class MainVilain final: public Player{
public: 
    // Constructor // Destructor
    MainVilain(std::string name, int health, int xp, int level, int power)
    :  Player{name, health, xp, level, power}
    {
        // code
    }

    MainVilain()
        : Player{}
    {
        // code
    }

    virtual ~ MainVilain(){
        // code
    }


    // methods
    virtual void attack (Player &player) override{
        player.health -= this ->power; 
        std::cout << player.player_name << " was attacked by " << this->player_name << std::endl; 
        std::cout << player.player_name << " health was reduced by " << this->power << std::endl; 
    }

    virtual void generate_health (Player &player) override{
        
    }
}; 

