#include <iostream>
#include <string>
#include "Player.hpp"
// #include "Assassin.hpp"
using namespace std;
namespace coup{
    class Contessa: public Player
    {
    private:
        /* data */
    public:
        Contessa(Game &game, string privateName);
        ~Contessa();
        string role();
        int coins();
        void income();
        void foreign_aid();
        void coup(Player &p);
        // void steal(Player &p);
        // void transfer(Player &send, Player &accept);
        // void tax();
        void block(Player &blocked);
    };
    
    // ::(/* args */)
    // {
    // }
    
    // ::~()
    // {
    // }
    
}