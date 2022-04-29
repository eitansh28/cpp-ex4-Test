#include <iostream>
#include <string>
#include "Ambassador.hpp"
using namespace std;
namespace coup{
    Ambassador::Ambassador(Game &game, string privateName):Player(game, privateName){
        game.insertPlayer(privateName);
        this->roleName="Ambassador";
    }
    Ambassador::~Ambassador(){}
    string Ambassador::role(){return this->roleName;}
    int Ambassador::coins(){return this->numsCoins;}
    void Ambassador::income(){
        this->numsCoins++;
        this->game->nextTurn();
    }
    void Ambassador::foreign_aid(){
        this->numsCoins+=2;
        this->game->nextTurn();
    }
    void Ambassador::coup(Player &p){
        if(this->numsCoins<7){
            throw invalid_argument{"you need at least 7 coins"};
        }this->game->deletePlayer(p.getName());
        this->numsCoins-=7;
    }
    // void Ambassador::steal(Player &p){}
    void Ambassador::transfer(Player &send, Player &accept){
        send.numsCoins--;
        accept.numsCoins++;
    }
    // void Ambassador::tax(){}
    void Ambassador::block(Player &blocked){
        blocked.isBlocked=1;
        blocked.whoBlockMe=3;
    }
}
    