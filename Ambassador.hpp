#include <iostream>
#include <string>
#include "Player.hpp"
using namespace std;
namespace coup{
    class Ambassador: public Player
    {
    private:
        /* data */
    public:
        Ambassador(Game &game, string privateName);
        ~Ambassador();
        string role();
        int coins();
        void income();
        void foreign_aid();
        void coup(Player &p);
        // void steal(Player &p);
        void transfer(Player &send, Player &accept);
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