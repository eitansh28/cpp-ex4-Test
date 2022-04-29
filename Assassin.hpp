#include <iostream>
#include <string>
#include "Player.hpp"
using namespace std;
namespace coup{
    class Assassin: public Player
    {
    private:
        /* data */
    public:
        std::string whoDies;
        Assassin(Game &game, string privateName);
        ~Assassin();
        string role();
        int coins();
        void income();
        void foreign_aid();
        void coup(Player &p);
        // void steal(Player &p);
        // void transfer(Player &send, Player &accept);
        // void tax();
        // void block(Player &blocked);
    };
    
    // Assassin::Assassin(/* args */)
    // {
    // }
    
    // Assassin::~Assassin()
    // {
    // }
    
}