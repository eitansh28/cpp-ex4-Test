#pragma once
#include <iostream>
#include <string>
#include "Game.hpp"
// using namespace std;
namespace coup{
    class Player
    {
    protected:
        // Game game;
        // std::string privateName;
        // int numsCoins;
        // int isBlocked;
        // int whoBlockMe;
    public:
        Game *game;
        std::string privateName;
        std::string roleName;
        int numsCoins;
        int isBlocked;
        int whoBlockMe;
        std::string lastAct;
        Player(Game &game, std::string privateName);
        ~Player();
        std::string getName();
        virtual std::string role();
        virtual int coins();
        virtual void income();
        virtual void foreign_aid();
        virtual void coup(Player &p);
        virtual void steal(Player &p);
        virtual void transfer(Player &send, Player &accept);
        virtual void tax();
        virtual void block(Player &blocked);
    };
    
}