#include <iostream>
#include <string>
#include "Player.hpp"
#include <vector>
// #include "Game.hpp"
using namespace std;
namespace coup{
    Player::Player(Game &game, std::string privateName){
        this->game=&game;
        this->privateName=privateName;
        this->numsCoins=0;
        // auto itPos = game.numsPlayers;
        // game.playersList.insert(itPos++, name);
    }
    Player::~Player(){}
    std::string Player::getName(){
        return this->privateName;
    }
    std::string Player::role(){return this->roleName;}
    int Player::coins(){return this->numsCoins;}
    void Player::income(){}
    void Player::foreign_aid(){}
    void Player::coup(Player &p){}
    void Player::steal(Player &p){}
    void Player::transfer(Player &send, Player &accept){}
    void Player::tax(){}
    void Player::block(Player &blocked){}

}